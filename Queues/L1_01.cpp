#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(56);
    
    // size
    cout<<"Size of queue: "<<q.size()<<endl;
    
    // remvoe 
    q.pop();
    cout<<"Size of queue: "<<q.size()<<endl;\

    // empty
    if (q.empty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }

    // front
    cout<<"Front element in queue: "<<q.front();

    return 0;
}