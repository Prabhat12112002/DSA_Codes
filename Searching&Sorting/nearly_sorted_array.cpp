// binary_search in nearly sorted array
#include<iostream>
#include<vector>
using namespace std;

int nearlySortedArray(vector<int>arr, int target){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==target)
        return mid;

        else if(arr[mid-1]>=s && arr[mid-1]==target)
        return mid-1;

        else if(arr[mid+1]<=e && arr[mid+1]==target)
        return mid+1;

        else if(arr[mid]>target)
        // search in left
        e = mid-2;

        else
        s = mid+2;

        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    vector<int>arr{10,3,40,20,50,80,70};
    int target = 80;

    int ans = nearlySortedArray(arr, target);

    if(ans==-1){
        cout<<"Target not found";
    }
    else{
        cout<<"Target found at index: "<<ans;
    }


    return 0;
}