class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mp;
        int sum=0;
        for (auto& x: s){
            mp[x]++;
        }
        for(auto& y: t){
            mp[y]--;
        }
        for(auto& z:mp){
            sum+=abs(z.second);
        }
        return sum/2;

    }
};
