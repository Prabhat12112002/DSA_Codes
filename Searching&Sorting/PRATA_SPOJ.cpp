#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSol(vector<int>cooksRanks, int nP, int mid){
    int currP = 0; // initial cooked prata
    for(int i=0; i<cooksRanks.size();i++){
        int j=1;
        int timetaken = 0;

        while(true){
            if(timetaken+cooksRanks[i]*j<=mid){
                ++currP;
                timetaken += j*cooksRanks[i];
                ++j;
            }
            else{
                break;
            }
        }
        if(currP >=nP){
            return true;
        }
    }
    return false;
}
int minTimeToCompleteOrder(vector<int>cooksRanks, int nP){
    int start = 0;
    int heighestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
    int  end = heighestRank*(nP*(nP+1)/2);
    int ans = -1;

    while(start<=end){
        int mid = start+(end-start)/2;
        if(isPossibleSol(cooksRanks, nP, mid)){
            ans = mid;
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}
 
int main(){
    int T;
    cin>>T;
    while(T--){
        int nP, nC;
        cin>>nP>>nC;
        vector<int>cooksRanks;
        while(nC--){
            int R; cin>>R;
            cooksRanks.push_back(R);
        }
        cout<<minTimeToCompleteOrder(cooksRanks, nP)<<endl;
    }


    return 0;
}