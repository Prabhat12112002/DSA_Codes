#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>&q){
    stack<int>st;
    
    // step 1: put all elements fromt q to st
    while(!q.empty()){
        int element = q.front();
        q.pop();
        
        st.push(element);
    }
    
    // step 2: put all elements fromt st to q
    while(!st.empty()){
        int element = st.top();
        st.pop();

        q.push(element);
    }
}

void reverseQ_recursion(queue<int>&q){
    // Base case
    if(q.empty()) return;

    // step A
    int temp = q.front();
    q.pop();

    // step B 
    reverseQ_recursion(q);

    // step C
    q.push(temp);
}

int main(){
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    cout<<"Printing: "<<endl;
    // reverseQueue(q);
    reverseQ_recursion(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}