// pivot element in rotated array
#include<iostream>
#include<vector>
using namespace std;

int pivotElement(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(s==e)
        return s;

        if(mid+1<=e && arr[mid]>arr[mid+1])
        return mid;

        if(mid-1>=s && arr[mid-1]>arr[mid])
        return mid-1;

        if(arr[s]>arr[mid])
        // left search 
        e = mid -1;

        else{
            s = mid+1;
        }

        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    vector<int>arr{9,10,2,4,6,7,8};

    int ans = pivotElement(arr);
    cout<<"Index of Pivot element is: "<<ans<<endl;
    cout<<"Pivot element is: "<<arr[ans];
    
    return 0;
}