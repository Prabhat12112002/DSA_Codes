#include<iostream>
using namespace std;

void findMax(int arr[], int n, int i, int& maxi){
    //base case 
    if(i>=n){
        return;
    }
    
    // solve for 1 case baki recursion samhal lega
    if(arr[i]>maxi){
        maxi = arr[i];
    }
    
    findMax(arr, n, i+1, maxi);

}
void findMin(int arr[], int n, int i, int& mini){
    //base case 
    if(i>=n){
        return;
    }
    
    // solve for 1 case 
    if(arr[i]<mini){
        mini = arr[i];
    }


    //baki recursion samhal lega
    findMin(arr, n, i+1, mini);

}

int main(){
    int arr[] = {10,30,21,44,32,6,19,66};
    int n = 8;
    int i = 0;


    int maxi = INT_MIN;
    int mini = INT_MAX;

    findMax(arr, n,i, maxi);
    findMin(arr, n, i, mini);

    cout<<"Maximum number is: "<<maxi<<endl;
    cout<<"Minimum number is: "<<mini<<endl;

    return 0;
}