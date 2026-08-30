class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int o=mat.size(),oc=mat[0].size();
        
        int l=mat[0][0],r=mat[o-1][oc-1];
        int cnt=0;
        while(l<r){
            int row=o-1,col=0,cnt=0;
            int mid=l+(r-l)/2;
            while(row>=0 && col<oc){
                if(mat[row][col]<=mid){
                    cnt+=row+1;
                    col++;
                }
                else{
                    row--;

                }
    
            }
            if(cnt<k){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }          
        return r;
    }
};