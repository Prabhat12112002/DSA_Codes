#include<iostream>
using namespace std;

int climbStairs(int n){
    // base case 
    if(n==0 || n==1){
        return 1;
    }

    // R.R.
    int ans = climbStairs(n-1)+climbStairs(n-2);
    return ans;

}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int answer = climbStairs(n);
    cout<<answer<<" ";

    return 0;
}