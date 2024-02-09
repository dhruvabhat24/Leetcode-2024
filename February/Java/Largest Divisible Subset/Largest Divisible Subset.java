class Solution {
    public List<Integer> largestDivisibleSubset(int[] nums) {
        int n = nums.length;
        if (n == 0) return new ArrayList<>();
        
        Arrays.sort(nums);
        int[] dp = new int[n];
        int[] prev_index = new int[n];
        Arrays.fill(dp, 1);
        Arrays.fill(prev_index, -1);
        int maxi = 0;
        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    prev_index[i] = j;
                    if (dp[i] > dp[maxi])
                        maxi = i;
                }
            }
        }
        
        List<Integer> result = new ArrayList<>();
        while (maxi >= 0) {
            result.add(nums[maxi]);
            maxi = prev_index[maxi];
        }
        
        Collections.reverse(result);
        return result;
    }
}
