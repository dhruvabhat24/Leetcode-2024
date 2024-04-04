class Solution {
public:
    int maxDepth(string s) {
        int ans =0;
        int prev = ans;
        for(int i=0;i<s.size();i++){
            if (s[i]=='(') ans++;
            if (s[i]== ')') ans--;
            prev = max(ans,prev);
        }
        return prev;
    }
};
