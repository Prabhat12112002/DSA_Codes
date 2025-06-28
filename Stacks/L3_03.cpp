#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int>prevSmaller(vector<int>& input){
    stack<int>st;
    st.push(-1);
    
    vector<int>ans(input.size());
    for(int i=0; i<input.size(); i++){
        int curr = input[i];

        // apka answer stack me
        while(st.top() >= curr){
            st.pop();
        }
        
        // chhota element mil gya hai
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}

vector<int>NextSmaller(vector<int>& input){
    stack<int>st;
    st.push(-1);
    
    vector<int>ans(input.size());
    for(int i = input.size()-1; i>=0; i--){
        int curr = input[i];

        // apka answer stack me
        while(st.top() >= curr){
            st.pop();
        }
        
        // chhota element mil gya hai
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}

int main(){
    vector<int>input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

    vector<int> ans1 = prevSmaller(input);
    cout<<"Printing Previous Smaller element: "<<endl;
    for(auto it : ans1){
        cout<<it<<" ";
    }
    cout<<endl;

    vector<int> ans2 = NextSmaller(input);
    cout<<"Printing Next Smaller element: "<<endl;
    for(auto it : ans2){
        cout<<it<<" ";
    }

    return 0;
}
