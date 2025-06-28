#include<iostream>
using namespace std;

int factorial(int n){

    cin>>n;
    int i=1;
    int fact=1;
    while(i<=n){
        fact = fact*i;
        i++;
    }
    return fact;
}
int main(){
    int n;
    int ans = factorial(n);
    cout<<"Factorial of "<<n<<" is: "<<ans;
    return 0;
}