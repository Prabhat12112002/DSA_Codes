#include<iostream>
using namespace std;

int factorial(int n){
    //base case 
    if(n==1){
        return 1;
    }

    //RR
    int chhotiproblem = factorial(n-1);
    int badiproblem = n*chhotiproblem;

    return badiproblem;

}


int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int ans = factorial(n);

    cout<<"Factorial of "<<n<<" is: "<<ans;

    return 0;
}