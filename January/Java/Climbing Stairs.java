class Solution {
  public int climbStairs(int n) {
    if (n == 1) return 1;
    
    var dp = new int[n];
    dp[0] = 1;
    dp[1] = 2;
    
    for (var i=2; i<n; i++)
      dp[i] = dp[i-2] + dp[i-1];
      
    return dp[n-1];
  }
}
