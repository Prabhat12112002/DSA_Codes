#include<iostream>
#include<vector>
using namespace std;

void printSubsequences(string str, string output, int i, vector<string>& v){
    // base case
    if(i>=str.length()){
        // cout<<output<<endl;
        v.push_back(output);
        return;
    }
     
    // exclude
    printSubsequences(str,output,i+1,v);

    // include
    // output = output + str[i];
    output.push_back(str[i]);
    printSubsequences(str,output,i+1,v);
 
}

int main(){
    string str = "abc";
    string output = "";

    vector<string>v;
    int n = str.length();
    int i = 0;

    printSubsequences(str,output,i,v);
    cout << "Printing all subsequences " << endl;
    for(auto val : v){
        cout<<val<<" ";
    }

    cout << endl << "Size of vector is: " << v.size() << endl;


    return 0;
}