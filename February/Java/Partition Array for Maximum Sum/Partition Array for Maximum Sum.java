class Solution {
    public int maxSumAfterPartitioning(int[] arr, int k) {
        int n = arr.length; // Length of the input array
        int[] dp = new int[n]; // Initialize an array to store maximum sums
        
        for (int i = 0; i < n; i++) {
            int maxPartitionSum = Integer.MIN_VALUE; // Initialize the maximum sum for the current element
            int maxElement = Integer.MIN_VALUE; // Initialize the maximum element within the current group
            
            // Iterate over possible partitions of the current element
            for (int j = i; j >= (i - k + 1) && j >= 0; j--) {
                int partitionLength = i - j + 1; // Length of the current partition
                maxElement = Math.max(maxElement, arr[j]); // Find the maximum element in the partition
                int currentPartitionSum = maxElement * partitionLength; // Calculate the sum of the current group
                
                if (j == 0) {
                    maxPartitionSum = Math.max(maxPartitionSum, currentPartitionSum);
                } else {
                    int previousMaxSum = dp[j - 1]; // Maximum sum before the current partition
                    maxPartitionSum = Math.max(maxPartitionSum, previousMaxSum + currentPartitionSum);
                }
            }
            
            dp[i] = maxPartitionSum; // Store the maximum sum up to the current element
        }
        
        return dp[n - 1]; // Return the maximum sum after partitioning
    }
}
