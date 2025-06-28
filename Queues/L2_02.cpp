#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseK_element(queue<int>&q, int k){
    stack<int>st;
    int count = 0;
    int n = q.size();

    if(k<=0 || k>n) return;

    // step 1: k element -> stack
    while(!q.empty()){
        int element = q.front();
        q.pop();
        
        st.push(element);
        count++;
        if(count == k){
            break;
        }
    }

    // step 2: stack -> q me vapas
    while(!st.empty()){
        int element = st.top();
        st.pop();

        q.push(element);
    }

     // step 3; Push n-k element from front to back of q
     count = 0;
     while(!q.empty() && n-k != 0){
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if(count == n-k){
            break;
        }
     }
}

void interleaveQueue(queue<int>&q){
    // step A: seperate both parts
    int n = q.size();
    int k = n/2;
    int count = 0;

    queue<int>q2;

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;
        if(count == k){
            break;
        }
    }

    // step B: interleaving start krdo
    while(!q.empty() && !q2.empty()){
        int first = q2.front();
        q2.pop();
        q.push(first);

        int second = q.front();
        q.pop();
        q.push(second);
    }

    // odd wala case
    if(n&1){
        int element = q.front();
        q.pop();

        q.push(element);
    }
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    // q.push(8);

    cout<<"Printing: "<<endl;
    // reverseK_element(q, 5);
    interleaveQueue(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;
}