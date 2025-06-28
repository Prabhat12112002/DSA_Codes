#include<iostream>
using namespace std;

class maths{
    public:
    int sum(int a, int b){
        cout<<"I am inside 1st signature"<<endl;
        return a+b;
    }

    int sum(int a, int b, int c){
        cout<<"I am inside 2nd signature"<<endl;
        return a+b+c;
    }

    int sum(int a, double b){
        cout<<"I am inside 3rd signature"<<endl;
        return a+b+10;
    }
};

int main(){
    maths obj;
   cout<<obj.sum(100,5.25);

    
    return 0;
}