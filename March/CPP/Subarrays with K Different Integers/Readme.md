# Intuition
To find the number of subarrays with exactly k distinct elements, we can use a sliding window approach. We maintain a window that expands when the number of distinct elements is less than or equal to k and contracts when the number of distinct elements exceeds k. We count the number of subarrays that satisfy the condition and subtract the count of subarrays with exactly k-1 distinct elements to get the final result.

# Approach
1. **Sliding Window Technique**:
   - Initialize two pointers, i and j, both pointing to the start of the array.
   - Initialize an unordered map to store the frequency of each element in the current window.
   - Initialize a variable `count` to track the number of subarrays with exactly k distinct elements.
   - Iterate through the array with pointer j:
     - Expand the window by moving j to the right until the number of distinct elements in the window is less than or equal to k.
     - Update the frequency count of the current element in the map.
     - Shrink the window by moving i to the right until the number of distinct elements in the window exceeds k.
     - Update the count by adding the number of subarrays possible with exactly k distinct elements.
   - Return the total count of subarrays satisfying the condition.
2. **Counting Subarrays with k Distinct Elements**:
   - To count the number of subarrays with exactly k distinct elements, subtract the count of subarrays with exactly k-1 distinct elements from the count of subarrays with exactly k distinct elements.

# Complexity Analysis
- Time Complexity: O(n), where n is the size of the input array.
  - Both pointers traverse the array once, and each element is processed at most twice.
- Space Complexity: O(n) in the worst case for the unordered map.
