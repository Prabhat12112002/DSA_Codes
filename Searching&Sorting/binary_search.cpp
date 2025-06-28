#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearh(vector<int>arr, int key){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s+(e-s)/2;
    while(s<=e){
        int element = arr[mid];
        if(element==key){
            return mid;
        }
        else if(element < key){
            e = mid -1;
        }
        else{
            s = mid+1;

        }

        mid = s+(e-s)/2;
    }
    return -1;
}
int main(){
    vector<int>arr{4, 8, 9, 10, 11, 12, 13, 15, 20, 25};
    int key = 52;

    int indexofkey = binarySearh(arr, key);

    if(indexofkey== -1){
        cout<<"Key not found"<<endl;
    }
    else{
        cout<<"Key found at index: "<<indexofkey<<endl;
    }



    vector<int>brr{20, 21, 22, 23, 24, 25, 30};
    int found = binary_search(brr.begin(), brr.end(), 30);
    cout<<found;







    return 0;
}