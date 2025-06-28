#include<iostream>
#include<vector>
using namespace std;

// odd occuring element in an array
int odd_occurence(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(s==e)
        return s;

        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                s = mid+2;
            }
            else{
                e = mid;
            }
        }
        else{
            if(arr[mid]==arr[mid-1]){
                s = mid+1;
            }
            else{
                e = mid-1;      // importent & confusing
            }
        }

        mid = s+(e-s)/2;
    }
    return -1;
}


int main(){
    vector<int>arr{1,1,2,2,3,3,4,4,62,62,3,8,8,9,9};
    int ans = odd_occurence(arr);

    cout<<"index of odd occuring element is: "<<ans<<endl;
    cout<<"Odd occuring element in array is: "<<arr[ans];
    return 0;
}