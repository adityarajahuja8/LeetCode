class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l=0,r=0,cnt=0,bestl=-1,bestr=-1,bestlen=INT_MAX;
        while(r<s.size()){
            if(s[r]=='1'){
                cnt++;
            }
            while(cnt>=k){
                while(l<r && s[l]=='0'){
                    l++;
                }
                int len=r-l+1;
                if(len<bestlen || len==bestlen && s.substr(bestl,bestlen)>s.substr(l,len)){
                    bestlen=len;
                    bestl=l;
                    bestr=r;
                    
                }
                if(s[l]=='1'){  
                    cnt--;
                }
                l++;
            }
            r++;
        }
        
        if(bestl==-1){return "";}
        return s.substr(bestl,bestlen);
        
    }
};