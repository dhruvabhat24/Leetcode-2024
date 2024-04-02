class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        unordered_map<char,char> revmp;
        for(int i =0;i<s.size();i++){
            if (mp[s[i]]!=0){
                if (mp[s[i]]==t[i]) continue;
                else return false;
            }
            if(revmp[t[i]]!=0){
                if(revmp[t[i]]==s[i]) continue;
                else return false;
            }
            revmp[t[i]] = s[i];
            mp[s[i]] = t[i];
        }
        return true;

    }
};
