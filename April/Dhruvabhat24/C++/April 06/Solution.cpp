class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int open = 0, close = 0;
        string ans;
        //traverse from start to end to eleminate extra closing braces
        for (const char& c : s) {
            if (c != '(' && c != ')') {
                ans += c;
            } else if (c == '(') {
                open++;
                ans += c;
            } else if (open > 0) {
                ans += c;
                open--;
            }
        }

       //traverse from end to start to remove extra opening braces
        if (open > 0) {
             int n = ans.length();
            s = ans;
            ans = "";
            open = 0, close = 0;
            for (int i = n - 1; i >= 0; i--) {
                char c = s[i];
                if (c != '(' && c != ')') {
                    ans += c;
                } else if (c == ')') {
                    close++;
                    ans += c;
                } else if (close > 0) {
                    ans += c;
                    close--;
                }
            }
        }
        else{
            return ans;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
