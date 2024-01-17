class Solution {
    unordered_map<int,int> mp;
    unordered_set<int> st;
public:
    bool uniqueOccurrences(vector<int>& arr) {
        for(auto& x: arr){
            mp[x]++;
        }
        for(auto& y: mp){
            if(!st.insert(y.second).second){
                return false;
            }
        }
        return true;
    }
};
