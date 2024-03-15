class Solution {

    public int[] productExceptSelf(int[] nums){
    int[] right  = new int[nums.length];

     int prod = 1;
     for(int j = nums.length - 1; j >= 0; j--){
        right[j] = prod * nums[j];
        prod = right[j];
     }
   
     int leftProduct = 1;
     for(int k = 0; k < nums.length; k++){
           
       int rightProduct = 1;
       int finalProduct = 1;

       if(k < nums.length - 1){
            rightProduct = right[k + 1];
       }
       if(k > 0){
            leftProduct = leftProduct * nums[k - 1];
       }
       finalProduct = leftProduct * rightProduct;
       right[k] = finalProduct;
     }

    return right;
    }
}
