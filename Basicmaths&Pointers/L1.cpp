#include<iostream>
using namespace std;

int main(){
    // int a = 5; 
    // int b = 5; 

    // cout<<"Address of b is: "<<&b<<endl;

    // //creating pointer
    // int* ptr = &a;
    // cout<<"a: "<<a<<endl;
    // cout<<"Address of a is: "<<&a<<endl;
    // cout<<"value stored at ptr is: "<<ptr<<endl;
    // cout<<"value ptr is pointing to is: "<<*ptr<<endl;

    // int a = 9;
    // int* ptr = &a;
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(a)<<endl;

    // char ch = 'b';
    // char* c = &ch;
    // cout<<sizeof(c)<<endl;
    // cout<<sizeof(ch)<<endl;

    // cout<<"c: "<<c<<endl;
    // cout<<"ch: "<<ch<<endl;
    // cout<<"*c: "<<*c<<endl;
    // cout<<"&ch: "<<&ch<<endl;

    // double d = 5.03;
    // double* dtr = &d;
    // cout<<"d: "<<d<<endl;    
    // cout<<"&d: "<<&d<<endl;    
    // cout<<"dtr: "<<dtr<<endl;    
    // cout<<"*dtr: "<<*dtr<<endl;   
    // cout<<"size of dtr: "<<sizeof(dtr)<<endl;   


    // // BAD PRACTICE
    // int *ptr;
    // cout<<*ptr;

    // NULL pointer
    // int* ptr = 0;
    // int* ptr = NULL;
    // int* ptr = nullptr;
    // cout<<*ptr<<endl;

    // int a = 6;
    // int* ptr = &a;

    // // copy pointer
    // int* ptr2 = ptr;
    // cout<<*ptr<<endl;
    // cout<<*ptr2<<endl;

    int a = 20;
    int* p = &a;
    int* q = p;
    int* r = q;

    cout<<"a: "<<a<<endl;
    cout<<"&a: "<<&a<<endl;
    cout<<"p: "<<p<<endl;
    cout<<"&p: "<<&p<<endl;
    cout<<"*p: "<<*p<<endl;
    cout<<"q: "<<q<<endl;
    cout<<"&q: "<<&q<<endl;
    cout<<"*q: "<<*q<<endl;
    cout<<"r: "<<r<<endl;
    cout<<"&r: "<<&r<<endl;
    cout<<"*r: "<<*r<<endl;
    cout<<"(*p + *q + *r): "<<(*p + *q + *r)<<endl;
    cout<<"(*p)*2 + (*r)*3: "<<(*p)*2 + (*r)*3<<endl;
    cout<<"(*p/2) - (*q)/2: "<<(*p/2) - (*q)/2<<endl;


    return 0;
}