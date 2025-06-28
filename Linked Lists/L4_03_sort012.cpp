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

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void SortZeoOneTwo(Node* &head){
    // Step 1 : count zeros, Ones and Twos
    int zero = 0;
    int one = 0;
    int two = 0;

    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == 0){
            zero++;
        }
        else if(temp->data == 1){
            one++;
        }
        else{
            two++;
        }
        temp = temp->next;
    }

    // Step 2 : create a new linked list with 0,1,2
    temp = head;
    //fill zeros
    while(temp!=NULL){
        while(zero--){
            temp->data = 0;
            temp = temp->next;
        }

        // fill ones
        while(one--){
            temp->data = 1;
            temp = temp->next;
        }

        // fill twos
        while(two--){
            temp->data = 2;
            temp = temp->next;
        }

    }
}

Node* sort2(Node* &head){
    // creates dummy nodes
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    // traverse the original LL
    Node* curr = head;
    while(curr!=NULL){
        if(curr->data == 0){
            // take out the zero wali Node
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // append the zero node in zeroHead LL
            zeroTail->next = temp;
            zeroTail = temp;
        } else if(curr->data == 1){
            // take out the one wali Node
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;
            
            // append the one node in oneHead LL
            oneTail->next = temp;
            oneTail = temp;
            
        } else if(curr->data == 2){
            // take out the two wali Node
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // append the two node in twoHead LL
            twoTail->next = temp;
            twoTail = temp;
            
        }
    }
    // Now all 0, 1 and 2 nodes are ready

    // modify all one wali list
    Node* temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;
    
    // modify all one wali list
    temp = twoHead;
    twoHead = twoHead->next;
    temp->next = NULL;
    delete temp;

    // join list
       if(oneHead!=NULL){
        // one wali list is not empty
            zeroTail->next = oneHead;
            if(twoHead!=NULL){
                oneTail->next = twoHead;
            }
        }
        else{
            if(twoHead!=NULL){
                zeroTail->next = twoHead;
            }
        }


    // remove zeroHead dummy node
    temp = zeroHead;
    zeroHead = zeroHead->next;
    temp->next = NULL;
    delete temp;

    return zeroHead;
}

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(0);
    Node* fourth = new Node(0);
    Node* fifth = new Node(0);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    print(head);
    // SortZeoOneTwo(head);
    // Node* temp = NULL;
    head = sort2(head);
    print(head);
     
    return 0;
}