class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
    int n=arr.size();
    stack<int> st;
    vector<int> ans;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        }
        if(st.empty()) ans[i]=-1;
        else{
            ans[i]=st.top();
        }
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return i;
};