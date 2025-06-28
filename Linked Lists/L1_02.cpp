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

// I want to insert a node at the right of head of Linked List
void insertAtHead(Node* &head, int data){
    // step: 1;
    Node* newNode = new Node(data);

    // step: 2;
    newNode->next = head;
    
    // step: 3;
    head = newNode;
}

void print(Node* &head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
}

int main(){
    Node* head = NULL;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 60);
    insertAtHead(head, 90);
    insertAtHead(head, 100);

    cout<<"Printing Lindked List: "<<endl;
    print(head);

    return 0;
}