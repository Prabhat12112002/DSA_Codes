#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>arr{1,3, 4,4,4,4,4,6,7,8,8,8,14,14,14,14,14,20,20};
    int key = 8;

    auto first_occurence = lower_bound(arr.begin(), arr.end(), key);
    cout<<"First Occurence is: "<<first_occurence-arr.begin()<<endl;

    auto last_occurence =  upper_bound (arr.begin(), arr.end(), key);
    cout<<"Lat Occurence is: "<<last_occurence-arr.begin()-1<<endl;

   int total_occurrence = (last_occurence - first_occurence);
   cout<<"Total Occurence is: "<<total_occurrence;


    return 0;
}