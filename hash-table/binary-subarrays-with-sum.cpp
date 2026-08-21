class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        int m=0,ans=0;
        int l=0,r=0;
        unordered_map<int,int> seen;
        seen[0]=1;
        while(r<nums.size()){
            m=m+nums[r];
            if(m>=k){
                ans+=seen[m-k];
            }
            seen[m]++;
            r++;
        }
        return ans;
    }
};