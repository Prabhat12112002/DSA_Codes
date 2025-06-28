#include<iostream>
using namespace std;

void Print_digit(int n){
    // base case
    if(n==0){
        return;
    }

    // baki recursion samhal lega
    Print_digit(n/10);

    // 1 case sovle krdo
    int digit = n%10;
    cout<<digit<<" ";
}

int main(){
    int n = 4568;

    if(n==0){
        cout<<0;
    }
    Print_digit(n);

    return 0;
}