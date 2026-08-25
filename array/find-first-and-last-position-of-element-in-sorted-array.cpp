class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        int l=0,r=nums.size()-1;
        int fir=-1,las=-1;
        vector<int> save(2,-1);

        if(nums.empty()){
            return {-1,-1};
        }
        while(l<=r){
            int mid=l+(r-l)/2;
            // int is=0;
            if(nums[mid]==t){
                fir=mid;
                r=mid-1;
            }
            else if(nums[mid]>t){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        int l1=0,r1=nums.size()-1;
        while(l1<=r1){
            int mid=l1+(r1-l1)/2;
            // int is=0;
            if(nums[mid]==t){
                las=mid;
                l1=mid+1;
            }
            else if(nums[mid]>t){
                r1=mid-1;
            }
            else{
                l1=mid+1;
            }
        }
        
        return {fir,las};
    }
};