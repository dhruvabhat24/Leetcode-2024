class Solution {
    public int rangeBitwiseAnd(int left, int right) {
        int res = right;
        while(right > left) {
            res = right & (right-1);
            right = res;
        }
        return res;
        
    }
}
