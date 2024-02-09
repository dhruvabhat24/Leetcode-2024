# Largest Divisible Subset

## Class: Solution

This class contains a method to find the largest divisible subset from a given vector of integers.

### Method: `largestDivisibleSubset`

Finds the largest divisible subset from the given vector of integers.

#### Parameters

- `nums`: A vector of integers.

#### Returns

A vector of integers representing the largest divisible subset.

### Approach

The `largestDivisibleSubset` method finds the largest divisible subset from the given vector of integers.

1. **Initialization:**
   - Get the size of the input vector `nums` and initialize two vectors `groupsize` and `preveElement` of size `n` each, with initial values 1 and -1 respectively.
   - Sort the input vector `nums` in non-decreasing order.

2. **Dynamic Programming:**
   - Iterate through each element of the input vector `nums`.
   - For each element at index `i`:
      - Iterate through all elements before `i` (from index `0` to `i-1`).
      - Check if the current element at index `i` is divisible by the element at index `j` (nums[i] % nums[j] == 0) and if the group size at index `i` is less than the group size at index `j` plus 1.
      - If both conditions are met, update the group size at index `i` to be one more than the group size at index `j` and update the previous element index at index `i` to be `j`.
   
3. **Find Maximum Group Size:**
   - Iterate through all elements of the group size vector (`groupsize`) to find the index (`maxIndex`) with the maximum group size.
   
4. **Reconstruct Subset:**
   - Initialize an empty vector `result`.
   - Iterate backwards from the index `maxIndex` until reaching `-1` (using the `preveElement` vector):
      - Insert the element at index `i` of the sorted input vector `nums` at the beginning of the `result` vector.
   
5. **Result:**
   - Return the `result` vector, which represents the largest divisible subset.

The approach utilizes dynamic programming to efficiently find the largest divisible subset. It iterates through each element of the input vector, updating the group sizes and previous elements accordingly. Finally, it reconstructs the largest divisible subset using the calculated information.
