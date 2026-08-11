class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                x.push(s[i]);
            }
            
            if(s[i]==')' || s[i]=='}' || s[i]==']'){
                if(!x.empty() && x.top()=='(' && s[i]==')'){
                    x.pop();
                    continue;
                }
                else if(!x.empty() && x.top()=='[' && s[i]==']'){
                    x.pop();
                    continue;
                }
                else if(!x.empty() && x.top()=='{' && s[i]=='}'){
                    x.pop();
                    continue;
                }
                else{
                    return 0;

                }
            }
            


        }
        return x.empty() ? 1:0;
    }
};