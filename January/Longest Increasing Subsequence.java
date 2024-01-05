class Solution {
    public int lengthOfLIS(int[] nums) {
        int ans=0;
        int n=nums.length;
        if(n==1) return 1;
        int[] dp=new int[n];
        dp[0]=1;
        for(int i=1;i<n;i++){
            int length=0;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    length=Math.max(length,dp[j]);
                }
            }
            dp[i]=1+length;
            ans=Math.max(ans,dp[i]);
        }
        return ans;
    }
}//TC:O(n^2), SC:O(n)
