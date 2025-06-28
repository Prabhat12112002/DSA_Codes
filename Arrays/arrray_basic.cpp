#include<iostream>
#include<vector>
using namespace std;

void factorial(int n){
    for(int i=(n-1); i>0; i--){
        n = n*i;
    }
    cout<<n;
}
int main(){
    // int arr[] = {4,55,12,45,45,36,97,44};
    // for(int i=0; i<8; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int arr[20] = {4,55,12,45,45,36,97,44};
    // for(int i=0; i<20; i++){
    //     cout<<arr[i]<<" ";
    // }
    /*Note: 
    #if we use arr[20] then it will print 0-->7th index numer 
    and other remaining place from 8th--->19th index 0. 
    for i<20  <4 55 12 45 45 36 97 44 0 0 0 0 0 0 0 0 0 0 0 0> 
    
    # if we use only arr[] then it will print garbage value after 7th index
    */

//    int arr[100];
//     int count = 0;
//     for(int i=0; i<100; i++){
//         arr[i] = i+1;
//         cout<<arr[i]<<" ";
//         count++;
//     }cout<<endl;
//     cout<<"count : "<<count;

    // int arr[] = {'a', 'b','d', 'r'};
    // for(int i=0; i<4; i++){
    //     cout<<arr[i]<<" ";
    // }
    int arr;
    for(int i=0; i<100; i++){
        cout<<i+1<<" ";
    }

    // int n = 6;
    
    //     factorial(n);
    return 0;
}