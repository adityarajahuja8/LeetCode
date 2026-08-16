class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> st;
        vector<int> ans(temp.size());
        // unordered_map m;
        for(int i=temp.size()-1;i>=0;i--){
            // int j=i;
            while(!st.empty() && temp[st.top()]<=temp[i]){
                st.pop();
            }
            
            if(st.empty()){
                ans[i]=0;
            }
            else{
                ans[i]=st.top()-i;
                
            }
            st.push(i);
            
        }

        return ans;

    }
};