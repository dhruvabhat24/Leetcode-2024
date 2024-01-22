class Solution {
    public int[] findErrorNums(int[] nums) {
        int n = nums.length;
        int i = 0;
        int mis = 0;
        int dub = 0;
        int res[] = new int[2];

        while (i < n) {
            if (nums[i] != nums[nums[i] - 1]) {
                int temp = nums[i];
                nums[i] = nums[nums[i] - 1];
                nums[temp - 1] = temp;
            } else {
                i++;
            }
        }

        for (i = 0; i < n; i++) {
            if (nums[i] != (i + 1)) {
                res[0] = nums[i];
                res[1] = i + 1;
            }
        }
        return res;  
    }
}
