#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_front(22);
    dq.push_front(12);
    dq.push_back(51);
    dq.push_back(23);

    cout<<"Size of deque: "<<dq.size()<<endl;
    dq.pop_front();
    cout<<"Size of deque: "<<dq.size()<<endl;
    dq.pop_back();
    cout<<"Size of deque: "<<dq.size()<<endl;

    cout<<"Front of deque: "<<dq.front()<<endl;
    cout<<"Back of deque: "<<dq.back()<<endl;

    if(dq.empty()){
        cout<<"deque is empty";
    }else{
        cout<<"deque is not empty";
    }

    return 0;
}