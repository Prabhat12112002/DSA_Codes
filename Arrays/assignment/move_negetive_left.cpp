#include<iostream>
#include<algorithm>
using namespace std;

void Move_all_negative_to_left(int *arr, int n){ // we can also use arr[] instead of *arr
// Dutch national flag algo.
    int low = 0, high = n-1;
    while(low<high){
        if(arr[low]<0){
            low++;
        }
        else if(arr[high]>0){
            high--;
        }
        else{
            swap(arr[low], arr[high]);
        }
    }

    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
}

int main(){
    int n;
    
    int arr[] = {-5, -8, 2, 0, 6, -1, 4};
    n = sizeof(arr)/sizeof(int);

    cout<<n<<endl;
   
    // sort(begin(arr), end(arr));
    // sort(arr, arr+n);

    Move_all_negative_to_left(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}