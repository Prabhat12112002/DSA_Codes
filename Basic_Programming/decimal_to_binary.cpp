#include<iostream>
#include<cmath>
using namespace std;


// making power function works like pow for only integers
int power(int base, int exponent){

    int result = 1;
    
   if(exponent<0){
    for(int i=1; i<=exponent; i++){
        result /= base;
    }
   }

   else if(exponent>0){
    for(int i=1; i<=exponent; i++){
        result *= base;
    }
   } 

   else{
    return 1;
   }
    
  return result;
}

// Here n is parameter 
// int decimal_binary_M1(int n){
//     int binary_no = 0;
//     int i=0;
//     while(n>0){
//         int bit = n%2;
//         binary_no = bit*pow(10,i++)+binary_no;
//         n=n/2;
//     }
//     return binary_no;
// }

int decimal_binary_M2(int n){
    int binary_no = 0;
    int i=0;
    while(n>0){
        int bit = (n & 1);
        binary_no = bit*power(10,i++)+binary_no; 
        // here, we can also use pow(base,exponent) predefined function
        
        n = n>>1;
    }
    return binary_no;
}

void print(int n){
    cout<<"Enter the decimal number: "<<endl;
    cin>>n;

    // cout<<"Binary no is: \n"<<decimal_binary_M1(n)<<" ";
    cout<<"Binary no is: \n"<<decimal_binary_M2(n)<<" ";

}
int main(){
    int base, exponent;
    cout<<"Base: ";
    cin>>base;

    cout<<"exponent: ";
    cin>>exponent;

   cout<<power(base, exponent)<<" "<<endl;


    int n;
    // Here n is argument
    print(n);
    // cout<<"Enter the decimal number: "<<endl;
    // cin>>n;

    // // cout<<"Binary no is: \n"<<decimal_binary_M1(n)<<" ";
    // cout<<"Binary no is: \n"<<decimal_binary_M2(n)<<" ";

    return 0;
}