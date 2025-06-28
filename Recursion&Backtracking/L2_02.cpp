#include<iostream>
using namespace std;

// void print(int arr[], int n, int i){
//     //base case
//     if(i>=n){
//         return;
//     }

//     // processing
//     cout<<arr[i]<<" ";

//     print(arr, n, i+1);
// }

void print(int arr[], int n){
    //base case
    if(n==0){
        return;
    }

    // processing
    cout<<arr[0]<<" ";

    print(arr+1, n-1);
}

int main(){
    int arr[5] = {10,20,30,40,50};
    int n = 5;

    int i = 0;
    // print(arr,n,i);
    print(arr,n);


    return 0;
}