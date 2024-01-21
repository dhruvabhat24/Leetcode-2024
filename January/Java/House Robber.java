class Solution {

    public int helper(int[] nums, int i,HashMap<Integer,Integer> memo){
        if(memo.containsKey(i)){
            return memo.get(i);
        }
        if(i >= nums.length){
            return 0;
        }
        int notTake = 0;
        int take= nums[i]+helper(nums,i+2,memo);
        if (i < nums.length-1)    
            notTake = nums[i+1]+helper(nums,i+3,memo);
        memo.put(i,Math.max(take,notTake));
        return memo.get(i);
    }
    public int rob(int[] nums) {
        return helper(nums,0, new HashMap<Integer,Integer>());
    }
}
