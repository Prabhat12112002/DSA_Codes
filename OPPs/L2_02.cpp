#include<iostream>
using namespace std;

class car{
    public:
    int weight;
    int age;
    string name;

    void speedUp(){
        cout<<"Speeding up"<<endl;
    }

    void breakMaro(){
        cout<<"Speeding up"<<endl;
    }

};

class scorpio: public car{

};

int main(){
    scorpio s1;
    s1.speedUp();
    return 0;
}