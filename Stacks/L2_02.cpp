// reverse stack
#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&s, int target){
    // base case
    if(s.empty()){
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

    // recursive calls 
    insertAtBottom(s, target);

    // Back Track
    s.push(topElement);
}

void reverseStack(stack<int>&s){
    if(s.empty()){
        return;
    }

    int target = s.top();
    s.pop();

    // reverse stack
    reverseStack(s);

    // insert at bottom target
    insertAtBottom(s, target);
}


int main(){

    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    reverseStack(s);
    cout<<"Printing after reverse --"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}