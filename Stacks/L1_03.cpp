#include<iostream>
using namespace std;

class Stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data){
        if (top2 - top1 == 1){
            // space not available
            cout<<"Overflow at 1"<<endl;
        }else{
            top1++;
            arr[top1] = data;
        }
        
    }

    void pop1(){
    
        if (top1 == -1){
            // stack 1 is empty
            cout<<"Underflow in stack 1"<<endl;
        }else{
            // stack 1 is not empty
            top1--;
        }
        
    }

    void push2(int data){
        if (top2 - top1 == 1){
            // space not available
            cout<<"Overflow at 2"<<endl;
        }else{
            top2--;
            arr[top2] = data;
        }
        
    }

    void pop2(){
        if (top2 == -1){
            // stack 2 is empty
            cout<<"Underflow in stack 2"<<endl;
        }else{
            // stack 2 is not empty
            top2++;
        }
        
    }

    void print(){
        cout<<endl;
        cout<<"top1: "<<top1<<endl;
        cout<<"top2: "<<top2<<endl;
        for(int i = 0; i < size; i++){
            
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};



int main(){
    Stack s(10);
    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();

    s.push2(100);
    s.print();
    s.push2(200);
    s.print();
    s.push2(300);
    s.print();

    return 0;
}