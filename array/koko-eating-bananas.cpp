class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=0;
        for(int i=0;i<piles.size();i++){
            r=max(piles[i],r);
        }
        int mid;
        while(l<r){
            mid=l+(r-l)/2;
            int hrs=0;
            for(int i=0;i<piles.size();i++){
                hrs+=(piles[i]+mid-1)/mid;
            }
            if(hrs<=h){
                r=mid;
            }
            else if(hrs>h){
                l=mid+1;
            }
            
        }
        return l;
    }
};