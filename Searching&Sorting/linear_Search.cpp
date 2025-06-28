#include<iostream>
#include<vector>
using namespace std;

bool LinearSearch(vector<int>brr, int key){
    int n;
    for(int i=0; i<brr.size(); i++){
        if(brr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){

    // int arr[] = {4, 8, 9, 5, 1, 11};
    // int key = 12;
    // int size = sizeof(arr)/sizeof(int);

    vector<int> brr{25, 12, 1, 2, 22, 28, 29};
    int key = 2;
    bool found = LinearSearch(brr,key);

    if(found){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }


    return 0;
}