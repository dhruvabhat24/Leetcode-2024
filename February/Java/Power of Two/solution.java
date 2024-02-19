class Solution {
    public boolean isPowerOfTwo(int n) {
        return n > 0 && Integer.bitCount(n) == 1;
    }
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.isPowerOfTwo(1));   
        System.out.println(solution.isPowerOfTwo(16));  
        System.out.println(solution.isPowerOfTwo(3));  
    }
}
