// divide two numbers using binay search
#include<iostream>
using namespace std;

int solve(int divident, int divisor){
    int s = 0;
    int e = abs(divident);
    int mid = s+(e-s)/2;

    int ans = -1;

    while(s<=e){
        if(abs(mid*divisor)==abs(divident))
            return mid;
        
        else if(abs(mid*divisor)>abs(divident)){
            //searcch in left 
            e=mid-1;
        }

        else 
        // store ans 
        ans = mid;
        // right search 
        s=s+1;


        mid = s+(e-s)/2;
    }

    if((divisor<0 && divident<0) || (divisor>0 && divident>0)){
        return ans;
    }
    else{
        return -ans;
    }

}

int main(){
    int divident=-57, divisor=-6;
    int ans = solve(divident, divisor);
    int n;

    cout<<"Ans is: "<<ans<<endl;
    
    return 0;
}