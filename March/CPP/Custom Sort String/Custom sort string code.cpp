class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> sCounts(26, 0);
        
        for (char c : s) {
            sCounts[c - 'a']++; 
        }

        string result = "";

        for (char c : order) {
            while (sCounts[c - 'a'] > 0) {
                result += c;
                sCounts[c - 'a']--;
            }
        }

        for (int i = 0; i < 26; ++i) {
            while (sCounts[i] > 0) {
                result += (char)('a' + i);
                sCounts[i]--;
            }
        }

        return result;
    }
};
