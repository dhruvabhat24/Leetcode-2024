class Solution {
public:
    int maxDepth(string& s) {
        int ans=0, p=0;
        for(char c: s){
            p+=(c=='(')-(c==')');
            ans=max(ans, p);
        }
        return ans;  
    }
};
