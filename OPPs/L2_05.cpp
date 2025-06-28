#include<iostream>
using namespace std;

// heirarical Inheritance
class Car{
    public:
    int age;
    int weight;
    string name;

    void speedUp(){
        cout<<"Speeding Up"<<endl;
    }
};

class scorpio:public Car{

};

class fortuner:public Car{

};

int main(){
    scorpio s11;
    s11.speedUp();

    fortuner f11;
    f11.speedUp();


    return 0;
}