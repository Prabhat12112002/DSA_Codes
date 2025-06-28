#include<iostream>
#include<vector>
using namespace std;

bool Check_sorted(vector<int>&v, int& n, int i){

    // base case
    if(i==n-1){
        return true;
    }

    // 1 case solve krdo
    if(v[i+1]<v[i]){
        return false;
    }

    // baki recursion samhal lega
    bool ans = Check_sorted(v,n,i+1);
    return ans;
 
}


int main(){
    vector<int> v{5, 8, 1,4,4};
    int n = v.size();
    int i = 0;

    bool isSorted = Check_sorted(v,n,i);
    if(isSorted) {
     cout << "Array is sorted" << endl;
    }
   else {
     cout << "Array is not sorted" << endl;
    }
    return 0;
}