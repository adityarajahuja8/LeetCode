class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
    int n=arr.size(),a=0,b=0;
    long long ans=0;
    stack<int> st;
    vector<int> right(n),left(n);
    // vector<int> left;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        
        if(st.empty()) right[i]=n;
        else{
            right[i]=st.top();
        }
        
        
        st.push(i);
    }

    while(!st.empty()) st.pop();
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        }
        
        if(st.empty()) left[i]=-1;
        else{
            left[i]=st.top();
        }
        
        st.push(i);
    }
    long long cont;
    long long MOD=1000000007;
    for(int i=0;i<n;i++){
        int l=i-left[i];
        int r=right[i]-i;
        cont=1LL*arr[i]*l*r;
        ans=(ans+cont)%MOD;
    }

    return ans;
    }
};