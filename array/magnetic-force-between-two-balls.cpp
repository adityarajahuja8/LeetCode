class Solution {
public:
    int maxDistance(vector<int>& arr, int k) {
        
        sort(arr.begin(),arr.end());
        int l=0,r=arr[arr.size()-1]-arr[0];
        
        while(l<r){
            int fiel=arr[0];
            int m=1;
            int mid=l+(r-l+1)/2;
            for(int i=1;i<arr.size();i++){
                if(arr[i]-fiel>=mid){
                    m++;
                    fiel=arr[i];
                }
            }
            if(m>=k){
                l=mid;
            }
            else{
                r=mid-1;
            }
        }
        return l;
    }
};