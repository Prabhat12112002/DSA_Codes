#include<iostream>
using namespace std;

int findSqrt(int n){
    int target = n;
    int s = 0;
    int e = n;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(mid*mid==target){
            return mid;
        }

        if(mid*mid>target){
            // left search 
            e = mid-1;
        }
        else{
            // ans store 
            ans = mid;
            //right search
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int ans = findSqrt(n);
    cout<<"Ans is: "<<ans<<endl;

    int precision;
    cout<<"Enter the number floating digit in precision: ";
    cin>>precision;

    double step = 0.1;
    double finalans = ans;
    for(int i=0; i<precision; i++){
        for(double j=finalans; j*j<=n; j=j+step){
            finalans=j;
        }
        step = step/10;
    }

    cout<<"final ans is: "<<finalans;


    return 0;
}