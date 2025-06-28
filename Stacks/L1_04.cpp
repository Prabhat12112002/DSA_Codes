#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str = "Prabhat";

    stack<char>S;
    
    // Reverse String via stack
    for(int i=0; i<str.length(); i++){
        S.push(str[i]);
    }

    while(!S.empty()){
        cout<<S.top()<<" ";
        S.pop();
    }
    return 0;
}