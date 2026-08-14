class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        for(int i=0;i<nums2.size();i++){
            st.push(nums1[i]);
            int j=0;
            while(st.top()!=nums2[j]){
                j++;
            }
            if(nums2[j]>st.top()){
                st.pop();
                st.push(nums2[j]);
            }
            else{
                st.pop();
                st.push(-1);

            }
        }
        return st;
    }
};