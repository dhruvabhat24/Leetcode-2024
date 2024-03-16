class Solution {
    public int findMaxLength(int[] nums) {
        int len = nums.length;
        int sum = 0;
        int[] arr = new int[len+1];
        for (int i = 0; i < len; i++){
            if(nums[i] == 0)
                sum--;
            else
                sum++;
            arr[i+1] = sum;
        }
        
        int max = 0;
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < len + 1; i++){
            if(map.containsKey(arr[i]))
                max = Math.max(max, i - map.get(arr[i]));
            else
                map.put(arr[i], i);
        }
        return max;
    }
}
