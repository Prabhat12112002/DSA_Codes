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
        while(st.top() != -1 && input[st.top()] >= curr){
            st.pop();
        }
        
        // chhota element mil gya hai
        ans[i] = st.top();
        st.push(i);
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
        while(st.top() != -1 && input[st.top()] >= curr){
            st.pop();
        }
        
        // chhota element mil gya hai
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int getRectangularAreaHistogram(vector<int>& height){
    // step 1 : prevSmaller output
    vector<int> prev = prevSmaller(height);
    
    // step 1 : NextSmaller call
    vector<int> next = NextSmaller(height);

    int MaxArea = INT_MIN;
    int size = height.size();

    for(int i=0; i<height.size(); i++){
        int length = height[i];

        if(next[i] == -1){
            next[i] = size;
        }
        int width = next[i] - prev[i] - 1;

        int area = length*width;
        MaxArea = max(MaxArea, area);
    }
    return MaxArea;
}

int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    cout<<"Answer is: "<<getRectangularAreaHistogram(v);

    return 0;
}

// https://leetcode.com/problems/largest-rectangle-in-histogram/submissions/1674445233/
