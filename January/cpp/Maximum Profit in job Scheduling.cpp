class Solution {
public:
    int jobScheduling(std::vector<int>& startTime, std::vector<int>& endTime, std::vector<int>& profit) {
        int len = startTime.size();
        vector<vector<int>> dp(len,vector<int>(3));

        for (int i = 0; i < len; i++) {
            dp[i] = {startTime[i], endTime[i], profit[i]};
        }

        sort(dp.begin(), dp.end(), [](const auto& a, const auto& b) {
            return a[1] < b[1];
        });

        std::map<int, int> map;
        map[0] = 0;

        for (const auto& i : dp) {
            int cur = (--map.lower_bound(i[0]))->second + i[2];
            if (cur > map.rbegin()->second) {
                map[i[1]] = cur;
            }
        }

        return map.rbegin()->second;
    }
};
