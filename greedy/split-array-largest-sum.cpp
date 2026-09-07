class Solution {
public:
    int splitArray(vector<int>& arr, int k) {
        int n=arr.size();
        int l=0,r=0;
        for(int i=0;i<n;i++){
            l=max(l,arr[i]);
            r+=arr[i];
        }

        while(l<r){
            int curr=0,sub=1;
            int mid=l+(r-l)/2;
            for(int i=0;i<n;i++){
                if(curr+arr[i]<=mid){
                    curr+=arr[i];
                }
                else{
                    sub++;
                    curr=arr[i];
                }
            }
            if(sub<=k){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return r;
    }
};