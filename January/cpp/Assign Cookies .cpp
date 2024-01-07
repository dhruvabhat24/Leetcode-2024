class Solution {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        int a_pointer = 0;
        int b_pointer = 0;
        while (a_pointer < g.size() && b_pointer < s.size()) {
            if (g[a_pointer] <= s[b_pointer]) {
                a_pointer++;
                b_pointer++;
            } else {
                b_pointer++;
            }
        }
        return a_pointer;
    }
};
