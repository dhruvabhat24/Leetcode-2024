
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (char &x : s) {
            mp[x]++;
        }
        auto cmp = [](pair<char, int>& a, pair<char, int>& b) {
            return a.second < b.second;
        };
        priority_queue<pair<char, int>, vector<pair<char, int>>, decltype(cmp)> pq(cmp);
        for (const auto& x : mp) {
            pq.push(x);
        }
        string st = "";
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            st.append(top.second, top.first); 
        }
        return st;
    }
};
