#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int firstOcc(vector<int>arr, int key){
    int s=0;
    int e=arr.size()-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        mid = s+(e-s)/2;

    }
    return ans;
}

int main(){
    vector<int>arr{1,3, 4,4,4,4,4,6,7,8};
    int key = 4;

    int ans = firstOcc(arr, key);
    cout<<"ans is: "<<ans<<endl;

    auto ans2 = lower_bound(arr.begin(), arr.end(), key);
    cout<<"ans2 is "<<ans2-arr.begin()<<endl;

    auto up =  upper_bound (arr.begin(), arr.end(), key);
    cout<<"upper is "<<up-arr.begin()-1<<endl;
    return 0;
}