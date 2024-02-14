class Solution {
    public int[] rearrangeArray(int[] nums) {
        int positiveIndex = 0;
        int negativeIndex = 1;
        int newArray[] = new int[nums.length];
        for(int i = 0 ;i < nums.length ;i++){
            if(nums[i] < 0 ){
                newArray[negativeIndex] = nums[i];
                negativeIndex += 2;
            }else{
                newArray[positiveIndex] = nums[i];
                positiveIndex += 2;
            }
        }
        return newArray;
    }
}
