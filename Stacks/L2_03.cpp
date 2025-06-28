#include<iostream>
#include<stack>
using namespace std;

void InsertSorted(stack<int>&s, int target){
    // base case
    if(s.empty()){
        s.push(target);
        return;
    }

    if(s.top() >= target){
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();
    InsertSorted(s, target);

    // BT
    s.push(topElement);
}

void SortStack(stack<int>&s){
    if(s.empty()){
        return;
    }

    int topElement = s.top();
    s.pop();
    SortStack(s);

    InsertSorted(s, topElement);
}
int main(){
    stack<int> s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);

    SortStack(s);
    cout<<"Printing: "<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;


    return 0;
}