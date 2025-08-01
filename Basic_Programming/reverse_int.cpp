#include<iostream>
#include<cmath>
using namespace std;

int reverse(int x) {
        int rem=0;
        int ans=0;
        bool isNegative=false;
             if(x<=INT_MIN){
            return 0;
        }

        if(x<0){
            isNegative=true;
            x = -x;
        }
        
        while(x>0){
            if(ans>INT_MAX/10){
                return 0;
            }
            int rem = x%10;
            ans = ans*10 + rem;
            x = x/10;
        }

        return isNegative ? -ans:ans;
}

int main(){
    int n;
    cin>>n;

    cout<<reverse(n);

    return 0;
}