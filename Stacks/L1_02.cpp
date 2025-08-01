#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int* arr;
    int size;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // function
    void push(int data){
        if(size-top>1){
            // space available
            //inset
            top++;
            arr[top] = data;
        }else{
            // space not available
            cout<<"Stack Overflow"<<endl;
        }

    }

    void pop(){
        if(top == -1){
            // Stack is empty
            cout<<"Stack Underflow"<<endl;
        }else{
            // stack is non empty
            top--;
        }
    }

    int getTop(){
        if(top == -1){
            cout<<"There is not element in Stack"<<endl;
            return -1;
        }else{
            return arr[top];
        }
    }

    int getSize(){
        return top+1;
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

};

int main(){
    Stack s(10);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }
    cout<<endl;

    cout<<"Size of stack is: "<<s.getSize();


    return 0;
}