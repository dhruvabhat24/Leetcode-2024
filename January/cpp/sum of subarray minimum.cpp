
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1000000007;
        stack<int> st;
        long sumOfMinimums = 0;

        for (int i = 0; i <= arr.size(); i++) {
            while (!st.empty() && (i == arr.size() || arr[st.top()] >= arr[i])) {
                int mid = st.top();
                st.pop();
                int leftBoundary = st.empty() ? -1 : st.top();
                int rightBoundary = i;

                long count = (mid - leftBoundary) * (rightBoundary - mid) % MOD;

                sumOfMinimums += (count * arr[mid]) % MOD;
                sumOfMinimums %= MOD;
            }
            st.push(i);
        }

        return static_cast<int>(sumOfMinimums);
    }
};

