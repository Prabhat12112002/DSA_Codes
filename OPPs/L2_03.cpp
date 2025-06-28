#include<iostream>
using namespace std;

class fruit{
    public:
    string name;
};

class mango:public fruit{
    public:
    int weight;
};

class alphanso: public mango{
    public:
    int sugerLevel;
};


int main(){
    alphanso a;
    cout<<a.name<<" "<<a.weight<<" "<<a.sugerLevel<<endl;

    return 0;
}