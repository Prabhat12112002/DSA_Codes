#include<iostream>
using namespace std;

void FindMissing(int arr[], int n){

    // // visiting method 
    // for(int i=0; i<n; i++){
    //     int index = abs(arr[i]);
    //     if(arr[index - 1] > 0){
    //        arr[index - 1] *= -1;
    //     }

    //     // all positive indexes are missing 
    //     if(arr[i]>0){
    //         cout<<i+1<<" ";
    //     }

    // }

    // *******sorting+swapping method******
   int i=0;
   while(i<n){
    int index = arr[i] - 1;
    if(arr[i] != arr[index]){
        swap(arr[i], arr[index]);
    }
    else{
        ++i;
    }
   }
//    for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//    }

   for(int i=0; i<n; i++){
    if(arr[i] != i+1){
        cout<<i+1<<" ";
    }
   }
   cout<<endl;

}

int main(){
    int n;
    int arr[] = {1, 3, 3, 3, 4};
    // cout<<arr[2];
    n = sizeof(arr)/sizeof(int);

    FindMissing(arr, n);
    return 0;
}