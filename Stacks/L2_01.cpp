// insert at bottom
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

    // recursive call 
    insertAtBottom(s, target);

    // Back Track
    s.push(topElement);
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    if(s.empty()){
        cout<<"Stack is empty, can't insert at bottom";
        return 0;
    }
    int target = s.top();
    s.pop();
    // solve(s, target);

    insertAtBottom(s, target);

    cout<<"Pringting: "<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}