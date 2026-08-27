class Solution {
public:
    int shipWithinDays(vector<int>& w, int days) {
        int fi=0,ma=0;
        for(int i=0;i<w.size();i++){
            fi=max(w[i],fi);
            ma+=w[i];
        }    
        int mid;
        while(fi<ma){
            int dayscnt=1,currs=0;
            mid=fi+(ma-fi)/2;
            for(int i=0;i<w.size();i++){
                // currs+=w[i];
                if(currs+w[i]>mid){
                    dayscnt++;
                    currs=w[i];
                }
                else{
                    currs+=w[i];
                }
            }
            if(dayscnt<=days){
                ma=mid;
            }
            else if(dayscnt>days){
                fi=mid+1;
            }
            
        }
        return ma;
    }
};