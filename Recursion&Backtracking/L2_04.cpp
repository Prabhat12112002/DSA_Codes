#include<iostream>
#include<vector>
using namespace std;

void Check_key(string str, int n, char key, int i, vector<int>&ans,int& count){
    // base case 
    if(i>=n){
        // key not found
        return;
    }

    // 1 case solve krdo
    if(str[i]==key){
        // cout<<"Found at: "<<i<<endl;
        ans.push_back(i);
        count++;
    }

    // baki recursion samhal lega
    return Check_key(str,n,key,i+1,ans,count);

}

int main(){
    string str = "lovebabbar";
    int n = str.length();
    char key = 'a';
    int i = 0;
    int count = 0;

    vector<int>ans;

    //  int ans = Check_key(str,n,key,i); // for int function
    Check_key(str,n,key,i,ans,count); // for void function
    // cout << "printing ans" << endl;
    // cout<<"answer is: "<<ans;
    cout << "printing ans" << endl;
        for(auto val: ans) {
                cout << val << " " ;
        }
        cout << endl;
    cout<<"Found "<<key<<" is "<<count<<" time.";


    return 0;
}