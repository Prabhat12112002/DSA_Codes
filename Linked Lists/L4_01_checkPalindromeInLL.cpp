#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

bool CheckPalindrome(Node* head){
    if(head == NULL){
        cout<<"LL is empty";
        return true;
    }
    if(head ->next == NULL){
        // only one node is in LL
        return true;
    }

    //  > 1 node in LL
    // Step: 1 -> find middle node
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }   // slow pointer is pointing to middle 

    // Step: 2 -> reverse LL

    Node* ReverseLLHead = reverse(slow->next);

    slow->next = ReverseLLHead;

    Node* temp1 = head;
    Node* temp2 = ReverseLLHead;

    while(temp2 != NULL){
        if(temp1->data != temp2->data){
            // Not a palindrome
            return false;
        } else{
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(20);
    Node* fifth = new Node(10);
    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    bool isPalindrome = CheckPalindrome(head);
    if(isPalindrome){
        cout<<"Linked List is a Palindrome";
    } else{
        cout<<"Linked List is not a Palindrome";
    }
    return 0;
}