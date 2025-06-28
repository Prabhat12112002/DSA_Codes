#include<iostream>
using namespace std;

// operator overloading
class param{
    public:
    int val;
    void operator+(param& obj2){
        int value1 = this->val;
        int value2 = obj2.val;
        cout<<(value2 - value1)<<endl;
    }

};

int main(){
    param object1;
    param object2;

    object1.val = 2;
    object2.val = 7;

    object1 + object2;
    
    return 0;
}