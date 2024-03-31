# Intuition
The problem aims to find the number of subarrays in a given array where the minimum element is at least minK and the maximum element is at most maxK. We can approach this problem using a sliding window technique to efficiently count such subarrays.

# Approach
1. **Sliding Window**:
   - Initialize two pointers, i and j, where i represents the start of the sliding window, and j represents the end.
   - Initialize prevMinK and prevMaxK variables to store the indices of the most recent occurrences of minK and maxK, respectively.
   - Initialize the variable ans to store the count of valid subarrays.
   - Iterate through the array using the j pointer:
     - If the current element is less than minK or greater than maxK, update i to j, indicating the start of a new potential subarray.
     - If the current element is equal to minK, update prevMinK to j.
     - If the current element is equal to maxK, update prevMaxK to j.
     - Calculate the number of subarrays ending at the current index j by taking the minimum of prevMaxK and prevMinK and subtracting i from it.
     - Add this count to the ans variable.
   - Return the ans variable, which represents the total count of valid subarrays.

# Complexity Analysis
- Time Complexity: O(N), where N is the size of the input array. We traverse the array once.
- Space Complexity: O(1), as we use only a constant amount of extra space for variables.
