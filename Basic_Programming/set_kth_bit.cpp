#include<iostream>
using namespace std;

int kthbit(int N, int K){
    // int mask = 1<<K;
    // int ans = N|mask;
    // return ans;
    return N|(1<<K);
}

int main(){
    int n, k;
    cin>>n;
    cin>>k;
    cout<<kthbit(n,k)<<" ";
    return 0;
}