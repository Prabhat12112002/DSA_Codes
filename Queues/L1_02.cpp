#include<iostream>
using namespace std;

// implementation of queue using array
class Queue {
    public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void Push(int data){
        if(rear == size){
            cout<<"Queue is full";
        }else{
            arr[rear] = data;
            rear++;
        }
    }

    void Pop(){
        if(front == rear){
            cout<<"Q is empty";
        }else{
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0; 
                rear = 0;
            }
        }
    }

    int getFront(){
        if(front == rear){
            cout<<"Queue is empty";
            return -1;
        }else{
            return arr[front];
        }
    }

    bool isEmpty(){
        return front == rear;
    }

    int getSize(){
        return rear - front;
    }
};

int main(){
    Queue q(10);
    q.Push(1);
    q.Push(2);
    q.Push(3);
    q.Push(15);
    q.Push(53);
    cout << "Front element: " << q.getFront() << endl;
    cout << "Queue size: " << q.getSize() << endl;

    q.Pop();
    cout << "Front element after pop: " << q.getFront() << endl;

    cout << "Queue size after pop: " << q.getSize() << endl;

    if(q.isEmpty()){
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    
    return 0;
}