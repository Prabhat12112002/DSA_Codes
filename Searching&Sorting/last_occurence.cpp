#include<iostream>
#include<vector>
using namespace std;

int LastOcc(vector<int>arr, int key){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
       if(arr[mid]==key){
        ans = mid;
        s = mid + 1;
       }
       else if(arr[mid]<key){
        s = mid + 1; 
       }
       else if(arr[mid]>key){
        e = mid - 1;
       }
       mid = s+(e-s)/2;
    }
    return ans;
}


int main(){
    vector<int>arr{11, 12, 23, 5, 5, 5, 5, 5, 14, 16, 22, 22, 56};
    int key = 22;

    int indexofLastOcc = LastOcc(arr, key);
    cout<<"last occurence is: "<<indexofLastOcc;

    return 0;
}