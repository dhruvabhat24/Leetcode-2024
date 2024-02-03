# Maximum Sum After Partitioning

## Class: Solution

This class contains a method to find the maximum sum after partitioning an array into non-overlapping subarrays.

### Method: `maxSumAfterPartitioning`

Calculates the maximum sum after partitioning the given array into subarrays of size at most `k`.

#### Parameters

- `arr`: A vector of integers representing the input array.
- `k`: An integer representing the maximum size of each partition.

#### Returns

An integer representing the maximum sum after partitioning the array.

### Approach

The method `maxSumAfterPartitioning` utilizes dynamic programming to find the maximum sum after partitioning the array into non-overlapping subarrays. The algorithm follows a bottom-up approach and uses a dynamic programming array `dp`, where `dp[i]` represents the maximum sum achievable starting from index `i`.

1. **Initialization:**
   - Initialize variables `N` and `K`, representing the size of the array and the maximum partition size plus one.
   - Create an array `dp` of size `K` and initialize it to zeros.

2. **Dynamic Programming Loop:**
   - Iterate through the array in reverse order, starting from the last element.
   - For each starting index, calculate the maximum value within the current partition (up to size `k`).
   - Update the `dp` array to store the maximum sum considering the current partition.

3. **Result:**
   - The maximum sum after partitioning is stored in `dp[0]`, representing the starting index of the array.

4. **Return:**
   - Return the calculated maximum sum.

The dynamic programming approach ensures that the algorithm efficiently considers all possible partitions and calculates the maximum sum, resulting in an optimal solution for the given problem.
