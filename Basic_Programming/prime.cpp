#include<iostream>
using namespace std;

bool checkprime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;

    cin>>n;

    bool isPrime = checkprime(n);
        if(isPrime){
            cout<<"Prime";
        }
        else{
            cout<<"Non-Prime";
        }
        
    return 0;
}