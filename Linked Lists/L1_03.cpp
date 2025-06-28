#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// I want to inset a node at the right of head of Linked List
void insertAtHead(Node* &head, Node* &tail, int data){
    // check empty LL
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step 1: create a node
    Node* newNode = new Node(data);

    // step 2: connect with tail node
    tail->next = newNode;

    // step 3: update tail
    tail = newNode;
}

void print(Node* &head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
}

int findLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail){
    // verify empty LL
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // find the position previous and current
    if(position==0){
        insertAtHead(head, tail, data);
        return;
    }
    int Len = findLength(head);
    if(position>=Len){
        insertAtTail(head, tail, data);
        return;
    }

    // step 1: find previous and curr or prev and curr
    int i = 1;
    Node* prev = head;
    while(i<position){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;

    // step 2; 
    Node* newNode = new Node(data);

    // step 3;
    newNode->next = curr;

    // step 4;
    prev->next = newNode;

}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,90);

    cout<<"Printing Lindked List: "<<endl;
    print(head);
    cout<<endl;

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    insertAtPosition(101, 4, head, tail);
    cout<< "Printing after insert at position call" << endl;
    print(head);
    cout << endl;
    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail->data << endl;

    return 0;
}