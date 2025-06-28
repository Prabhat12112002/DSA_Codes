#include<iostream>
#include<stack>
using namespace std;

int main(){
    // creation of stack
    stack<int>st;

    // insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    // remove
    st.pop();
    
    // check element on top
    cout<<"Element on top is: "<<st.top()<<endl;
    
    // size
    cout<<"Size of stack is: "<<st.size()<<endl;
    
    // check empty or not
    if(st.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    
    
    stack<int>S;
    
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);

    while(!S.empty()){
        cout<<S.top()<<" ";
        S.pop();
    }
    return 0;
}