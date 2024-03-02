class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (auto &x : nums) {
            x = pow(x, 2);
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};
