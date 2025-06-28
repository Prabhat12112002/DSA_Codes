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
    //TODO: Write a destrcutor to delete a node
    ~Node(){
        //write your code here
        cout << "Node with value: " << this->data << " deleted" << endl;
    }
};

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }else{
        // LL is non-empty
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
    }else{
        // LL is non-empty
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int findLength(Node* &head){
    int len=0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
     //step1: find the position: prev & curr;
    if(position == 0){
        insertAtHead(head,tail,data);
        return;
    }

    int len = findLength(head);
    if(position>=len){
        insertAtTail(head,tail,data);
        return;
    }

    int i=1;
    Node* prev = head;
    while(i<position-1){
        prev = prev->next;
        i++;
    }

    Node* curr = prev->next;
    Node* newNode = new Node(data);

    newNode->next = curr;
    prev->next = newNode;
}

void deleteNode(Node* &head, Node* &tail, int position){
    if(head==NULL){
        cout<<"LL is empty, can't delete";
        return;
    }
    if(position==1){
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    int len = findLength(head);
    if(position==len){
        int i=1;
        Node* prev = head;
        while(i<position-1){
            prev = prev->next;
            i++;
        }
        prev->next = NULL;
        Node* temp = tail;
        tail = prev;
        delete temp;
        return;
    }

    //deleting middle node
    //step  : find prev and curr
    int i=1;
    Node* prev = head;
    while(i<position-1){
        prev = prev->next;
        i++;
    }
    
    Node* curr = prev->next;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

Node* reverse(Node* &prev, Node* &curr){
    if(prev==NULL){
        //LL reverse ho chuki
        return prev;
    }

    Node* forward = curr->next;
    curr->next  =  prev;

    return reverse(curr, forward);
}

Node* reverseusingLoop(Node* &head){
    Node* prev = NULL;
    Node* curr = head;

    while(curr!=NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

Node* reverseusingRecursion(Node*prev, Node* &curr){
    if(curr==NULL){
        return prev;
    }
    Node* temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;

    return reverseusingRecursion(prev, curr);
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);

    print(head);
    cout<<endl;
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    
    insertAtPosition(head, tail, 101, 0);
    print(head);
    cout<<endl;
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    deleteNode(head, tail, 1);
    print(head);
    cout<<endl;
    Node* prev = NULL;
    Node* curr = head;
    cout<<"After reversing list: "<<endl;
    head = reverseusingRecursion(prev, curr);
    print(head);

    return 0;
}