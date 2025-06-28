#include<iostream>
#include<queue>
using namespace std;

// implementation of circular queue using array with doubly ended queue
class DeQue{
    public:
    int *arr;
    int front;  
    int rear;
    int size;

    DeQue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push_Rear(int data){
        // Queue is full
        // Single element case -> first element
        // circular nature
        // normal flow
        // TODO: add one more condition to check if queue full if block
        if((front == 0 && rear == size - 1)){
            cout << "Queue is full" << endl;
            return;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if (rear == size-1 && front != 0){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = data;

    }

    void push_Front(int data){
        // Queue is full
        // Single element case -> first element
        // circular nature
        // normal flow
        // TODO: add one more condition to check if queue full if block
        if((front == 0 && rear == size - 1)){
            cout << "Queue is full" << endl;
            return;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if (rear == size-1 && front != 0){
            front = size-1;
        }
        else{
            front--;
        }
        arr[front] = data;

    }

    void pop_Front(){
        // empty check
        // single element 
        // circular nature
        // normal flow

        if(front == -1){
            cout<<"Queue is empty, can't pop"<<endl;
            return;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            front = 0;
        }
        else{
            front++;
        }
    }

    void pop_Rear(){
        // empty check
        // single element 
        // circular nature
        // normal flow

        if(front == -1){
            cout<<"Queue is empty, can't pop"<<endl;
            return;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(rear == 0){
            rear = size - 1;
        }
        else{
            rear--;
        }
    }
};

int main(){
    
    return 0;
}