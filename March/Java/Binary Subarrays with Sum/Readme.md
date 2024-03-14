```java
class Solution {
    public int numSubarraysWithSum(int[] nums, int goal) {
        // Initialize total count of subarrays
        int totalCount = 0;
        
        // Initialize sum and prefix sum array
        int sum = 0;
        int prefixSum[] = new int[nums.length + 1];
        prefixSum[0] = 1; // Initialize prefix sum with 1 for empty subarray
        
        // Iterate through the array
        for (int num : nums) {
            sum += num; // Update the current sum
            
            // Check if the current sum is greater than or equal to the goal
            if (sum >= goal) {
                // Add the count of subarrays with sum equal to (sum - goal) to the total count
                totalCount += prefixSum[sum - goal];
            }
            
            // Increment the count of subarrays with the current sum
            prefixSum[sum]++;
        }
        
        return totalCount; // Return the total count of subarrays with the given sum
    }
}
```
This Java code defines a class `Solution` with a method `numSubarraysWithSum`, which takes an array of integers `nums` and an integer `goal` as parameters. It calculates the number of subarrays within `nums` that sum up to `goal`. It does this by maintaining a running sum of the elements encountered so far and keeping track of the prefix sum counts in an array.
