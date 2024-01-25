class Solution {
    public int longestCommonSubsequence(String text1, String text2) {
        
        int n1=text1.length(),n2=text2.length();
        int[][] dp = new int[n1+1][n2+1];

        for(int i1=1;i1<=n1;i1++){
            for(int i2=1;i2<=n2;i2++){
                int pick = 0,notpick=0;
                if(text1.charAt(i1-1)==text2.charAt(i2-1))
                    pick = 1 + dp[i1-1][i2-1];

                notpick = Math.max(dp[i1-1][i2],dp[i1][i2-1]);

                dp[i1][i2] = Math.max(pick,notpick);
            }
        }

        return dp[n1][n2];

    }
}