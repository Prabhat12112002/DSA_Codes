#include<iostream>
using namespace std;

class Animal{
    public:
    Animal(){
        cout<<"I am inside Animal constructor"<<endl;
    }
    virtual void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{
    public:
    Dog(){
        cout<<"I am inside Dog constructor"<<endl;
    }
    // operator overriding
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){
    // Animal a;
    // a.speak();

    // Dog d;
    // d.speak();

    // Animal *a = new Animal();
    // a->speak();

    // Dog *a = new Dog();
    // a->speak();

    // upcasting
    // Animal * b = new Dog();
    // b->speak();
    
    // // downcasting
    // Dog* c = (Dog*) new Animal();
    // c->speak();

    // Animal* a = new Animal();
    // Dog* a = new Dog();
    // Animal*a = new Dog();
    Dog* a = (Dog*) new Animal();

    return 0;
}