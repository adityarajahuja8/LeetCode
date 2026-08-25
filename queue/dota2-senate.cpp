class Solution {
public:
    string predictPartyVictory(string arr) {
        int n=arr.size();
        queue<int> r;
        queue<int> d;
        for(int i=0;i<n;i++){
            if(arr[i]=='R'){
                r.push(i);
            }
            else{
                d.push(i);
            }
        } 
        while(!r.empty() && !d.empty()){
            if(r.front()<d.front()){
                d.pop();
                int temp=r.front()+n;
                r.pop();
                r.push(temp);
            }
            else{
                r.pop();
                int temp=d.front()+n;
                d.pop();
                d.push(temp);
            }
        }
        return !r.empty()?"Radiant":"Dire";

    }
};