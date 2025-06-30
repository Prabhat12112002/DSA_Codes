#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* BuildTree(){
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    // step A, B and C
    Node* root = new Node(data);

    cout<<"Enter the data for left part of "<<data<<" node "<<endl;
    root->left = BuildTree();
    cout<<"Enter the data for right part of "<<data<<" node "<<endl;
    root->right = BuildTree();

    return root;
}

bool KthAncestor(Node* root, int k, Node* p){
    // base case
    if(root == NULL){
        return false;
    }

    if(root->data == p->data){
        return true;
    }

    bool leftAns = KthAncestor(root->left, k, p);
    bool rightAns = KthAncestor(root->right, k, p);

    // wapas aa rhe honge 
    // check left ya right me answer mila ya nhi
    if(leftAns || rightAns){
        k--;
    }
    if(k==0){
        cout<<"Answer: "<<root->data<<endl;
        k = -1;
    }
    return leftAns || rightAns;
}

int main(){
    Node* root = NULL;
    root = BuildTree();
    int k = 1;
    int p = 4;

    bool found = KthAncestor(root, k, p);
    
    return 0;
}