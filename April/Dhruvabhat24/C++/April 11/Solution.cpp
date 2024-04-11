class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<char>stk;
        string ans;
        for(char c :num){
            while(k>0 && !stk.empty() && stk.back()>c){
                stk.pop_back();
                k--;
            }
            stk.push_back(c);
        }
        while(k>0){
            stk.pop_back();
            k--;
        }
        for(char c : stk){
            if(ans.empty() && c=='0') continue;
            ans.push_back(c);

        }
        return ans.empty()?"0":ans;
    }
};
