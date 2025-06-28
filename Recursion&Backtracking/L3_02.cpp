#include<iostream>
#include<vector>
using namespace std;

int binary_Search(vector<int>arr, int s, int e, int key){
    // base case 
    if(s>e){
        return -1;
    }

    int mid = s+(e-s)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
        s=mid+1;
        // int ans = binary_Search(arr,s,e,key);
        // return ans;
    }
    else{
        e = mid -1;
    }
        int ans = binary_Search(arr,s,e,key);
        return ans;

}

int main(){

    vector<int> v{10,20,40,60,70,90,99};
    int target = 90;

    int n = v.size();
    int s = 0;
    int e = n-1;

    int ans = binary_Search(v,s,e,target);
    cout<<"Answer is: "<<ans;
    return 0;
}