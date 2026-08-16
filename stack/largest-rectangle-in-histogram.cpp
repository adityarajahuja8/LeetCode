class Solution {
public:
    int largestRectangleArea(vector<int>& hi) {
        stack<int> st;
        // vector<int> ans;
        int ma=0,left;
        for(int i=0;i<hi.size();i++){
            while(!st.empty() && hi[st.top()]>=hi[i]){
                int popped=st.top();
                st.pop();
                if(st.empty()) left=-1;
                else{
                    left=st.top();
                }
                
                int w=i-left-1;
                ma=max(hi[popped]*w,ma);
            }
            st.push(i);

            
            // st.push(i);

        }
        while(!st.empty()){
            int pop=st.top();
            st.pop();
            if(st.empty()) left=-1;
            else{
                left=st.top();
            }
            int w=hi.size()-left-1;
            ma=max(hi[pop]*w,ma);
        }
        // ans=max(ma,mx);
        return ma;
    }
};