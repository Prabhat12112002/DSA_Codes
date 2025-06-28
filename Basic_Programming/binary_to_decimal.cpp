#include<iostream>
#include<cmath>
using namespace std;


int binary_decimal_M1(int n){
    int i=0;
    int decimal_no = 0;
    while(n){
        int bit = n%2;
        decimal_no = bit*pow(2,i++) + decimal_no;
        n = n/10;
    }
    return decimal_no;
}

int main(){

    int n;
    cout<<"Enter the binary number: \n";
    cin>>n;

    cout<<"Decimal number is: "<<binary_decimal_M1(n);

    return 0;
}