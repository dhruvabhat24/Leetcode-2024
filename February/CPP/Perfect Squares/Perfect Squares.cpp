class Solution {
    private:
    int SolveTabulation(int n){
        vector<int> dp(n+1,-1);
        dp[0]=1;
        for(int i =1;i<=n;i++){
            int start = 1;
            int end = sqrt(n);
            int result = INT_MAX;
            for(int j=start;j<=end;j++){
                int numsquare = j*j;
                if (i-numsquare>=0){
                    int ans = 1+dp[i-numsquare];
                    result = min(result,ans);
                }
            }
            dp[i]=result;
        }
        return dp[n];
    }
public:
    int numSquares(int n) {
        int ans = SolveTabulation(n);
        return ans-1;
    }
};
