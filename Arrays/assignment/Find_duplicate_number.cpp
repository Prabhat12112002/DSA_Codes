#include<iostream>
#include<algorithm>
using namespace std;

int Find_duplicate(int arr[], int n){
    //***********sorting method**********
    // // sort(begin(arr), end(arr));
    // sort(arr, arr+n);

    // for(int i=0; i<n; i++){
    //    if(arr[i]==arr[i+1]){
    //     return arr[i];
    //    } 
    // }
    // return -1;

    // // ******visiting method*******
    // int ans = -1;
    // for(int i=0; i<n; i++){
    //     int index = abs(arr[i]);

    //     // already visited
    //     if(arr[index]<0){
    //         ans = index;
    //         break;
    //     }
    //     // visited mark
    //     arr[index] *= -1;
    // }
    // return ans;

    // ******Positioning method*******
    while(arr[0] != arr[arr[0]]){
        swap(arr[0], arr[arr[0]]);
    }
    return arr[0];


}
int main(){
    int n;
    int arr[] = {1, 3, 4, 2, 2};
    n = sizeof(arr)/sizeof(int);

    cout<<Find_duplicate(arr, n);

    return 0;
}