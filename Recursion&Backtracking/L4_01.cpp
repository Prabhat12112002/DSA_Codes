#include<iostream>
#include<vector> 
#include<limits.h>               
using namespace std;

void solve(vector<int>&arr, int sum, int i, int& maxi){
    // base case 
    if(i>=arr.size()){
        // update maxi
        maxi = max(sum,maxi);
        return;
    }
        //include
        solve(arr,sum+arr[i],i+2,maxi);
        
        // exclude
        solve(arr,sum,i+1,maxi);
        return;
}

int main(){
    vector<int> arr{1, 2, 3, 1, 3, 5, 8, 1, 9};
    int sum = 0;
    int maxi = INT_MIN;
    int i =0;
    solve(arr,sum,i,maxi);

    cout<<maxi;

    return 0;
}