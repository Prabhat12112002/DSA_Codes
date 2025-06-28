#include<iostream>
using namespace std;

class A{
    public:
    // int Physics;
    int Chemistry;
    A(){
        Chemistry = 78;
    }
};

class B{
    public:
    int Chemistry;
    B(){
        Chemistry = 90;
    }
};

class C: public A, public B{
    public:
    int Maths;
};

int main(){
    C obj;
    // diamond problem in multilevel inheritance
    cout<<obj.A::Chemistry<<" "<<obj.B::Chemistry<<" "<<obj.Maths<<endl;

    return 0;
}