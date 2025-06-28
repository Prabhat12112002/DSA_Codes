#include<iostream>
using namespace std;


int even_odd(int n){

    cout<<"Enter the number: ";
    cin>>n;
    if(n%2==0){
        cout<<"Even";
    }
    else if(n==0){
        cout<<"Odd";
    }
    else{
        cout<<"Odd";
    }
    return n;
}
int main(){
    int n;
    even_odd(n);

    return 0;
}