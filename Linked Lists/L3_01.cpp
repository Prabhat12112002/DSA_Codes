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

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* getMiddle(Node* head){
    if(head == NULL){
        cout<<"List is empty";
        return head;
    }
    if(head->next == NULL){
        // LL has only one node
        return head;
    }

    // for LL have > 1 node
    Node* slow = head;
    Node* fast = head->next;
    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

int getLength(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

Node* reverseKNode(Node* head, int k){
    if(head == NULL){
        cout<<"LL is empty";
        return head;
    }

    int len = getLength(head);
    if(k>len){
        cout<<"k is greater than length of LL";
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    int count = 0;
    while(count<k){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if(forward != NULL){
        // we still have nodes to reverse
        head->next = reverseKNode(forward, k);
    }
    // reverse head of the modified LL
    return prev;
}

bool checkForLoop(Node* &head){
    if(head == NULL){
        cout<<"LL is empty";
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast){
            // loop present
            return true;
        }
    }
    // fast NULL ho gya
    return false;
}

Node* startingPointLoop(Node* &head){
    if(head == NULL){
        cout<<"LL is empty";
        return head;
    }

    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast){
            // loop present
            slow = head;
            break;
        }
    }

    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}


Node* RemoveLoop(Node* &head){
    if(head == NULL){
        cout<<"LL is empty";
        return head;
    }

    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast){
            // loop present
            slow = head;
            break;
        }
    }
    Node* prev = fast;
    while(slow != fast){
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    prev->next = NULL;
    return slow;
} 


int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eighth = new Node(80);
    Node* ninth = new Node(90);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = fifth;

    // print(head);
    // cout<<"middle node: "<<getMiddle(head)->data<<endl;

    // head = reverseKNode(head, 3);
    // print(head);

    cout<<"Loop is Present or Not : "<< checkForLoop(head)<<endl;

    cout<<"Starting point of loop: "<<startingPointLoop(head)->data<<endl;
    
    RemoveLoop(head);
    cout<<"Removing loop"<<endl;
    print(head);
    cout<<"Loop is Present or Not : "<< checkForLoop(head)<<endl;


    return 0;
}