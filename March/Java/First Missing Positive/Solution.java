class Solution {
    public int firstMissingPositive(int[] nums) {
        int n = nums.length;
        for(int i=0;i<n;i++) {
            // mark all negatives to zero, because they are not useful
            if(nums[i] < 0) nums[i] = 0;
        }
        for(int i=0;i<n;i++) {
            int ind = Math.abs(nums[i]) - 1;
            if(ind < 0 || ind >= nums.length) continue; // out of bound index
            if(nums[ind] > 0) {
                nums[ind] *= -1; // mark as visited
            } else if(nums[ind] == 0) {
                // if this index contains zero mark this visited by
                // placing any negative value
                nums[ind] = Integer.MIN_VALUE + 1; 
            }
        }
        for(int i=0;i<n;i++) {
            // first non-negative index would be our answer
            if(nums[i] >= 0) return i+1;
        }
        return n+1;
    }
}
