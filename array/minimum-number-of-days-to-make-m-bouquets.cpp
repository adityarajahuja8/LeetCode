class Solution {
public:
    int minDays(vector<int>& arr, int m, int k) {
        int mi=INT_MAX,ma=0;
        for(int i=0;i<arr.size();i++){
            ma=max(arr[i],ma);
            mi=min(arr[i],mi);
        }
        int mid;
        if(arr.size()<(long long)m*k){
            return -1;
        }
        else{
            while(mi<ma){
                mid=mi+(ma-mi)/2;
                int concnt=0,bou=0;
                for(int i=0;i<arr.size();i++){
                    if(arr[i]-mid<=0){
                        concnt++;
                        if(concnt==k){
                            bou++;
                            concnt=0;
                        }
                    }
                    else{
                        concnt=0;
                    }
                }
                if(bou>=m){
                    ma=mid;
                }
                else if(bou<m){
                    mi=mid+1;
                }

            }
        }
        return ma;
    }
};