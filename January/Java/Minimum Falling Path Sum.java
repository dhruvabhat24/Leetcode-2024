class Solution {
    int dp[][]; 

    int solve(int[][] matrix, int row, int col) {
        if (row >= matrix.length || col >= matrix[0].length || col < 0) {
            return Integer.MAX_VALUE;
        }
        if (row == matrix.length - 1) {
            if (col < matrix[0].length && col >= 0)
                return matrix[row][col];
            else 
                return 0;
        }
        if (dp[row][col] != Integer.MIN_VALUE) {
            return dp[row][col];
        }
        return dp[row][col] = matrix[row][col] + Math.min(solve(matrix,row + 1, col), 
        Math.min(solve(matrix, row + 1, col - 1), solve(matrix, row + 1, col + 1)));
    }

    public int minFallingPathSum(int[][] matrix) {
        dp = new int[matrix.length][matrix[0].length];
        for (int [] a : dp) {
            Arrays.fill(a, Integer.MIN_VALUE);
        }
        int min_value = Integer.MAX_VALUE;
        for (int i = 0; i < matrix.length; ++i) {
            min_value = Math.min(min_value, solve(matrix, 0, i));
        }
        return min_value;
    }
}
