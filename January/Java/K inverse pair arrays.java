class Solution {
    private static final int MOD = 1_000_000_007;
    private static long[][] dp;
    static{
        dp = new long[1001][1001];
        dp[1][0] = 1L;
        dp[2][0] = 1L;
        dp[2][1] = 1L;
        for(int r=3;r<=1000;r++){
            long pre = 0L;
            for(int c=0;c<=1000;c++){
                if(c<r) dp[r][c] = pre = (pre+dp[r-1][c])%MOD;
                else dp[r][c] = pre = (pre-dp[r-1][c-r]+dp[r-1][c]+MOD)%MOD;
            }
        }
    }
    public int kInversePairs(int n, int k) {
        return (int)dp[n][k];
    }
}
