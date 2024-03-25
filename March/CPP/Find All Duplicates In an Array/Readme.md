# Intuition
To find duplicates in an array efficiently, we can utilize the properties of the array elements. Since the array contains integers ranging from 1 to N, we can map each element to its corresponding index. By marking elements as negative based on their presence, we can efficiently identify duplicates.

# Approach
1. **Using Negation**:
   - Traverse the array and for each element nums[i]:
     - Check if nums[abs(nums[i]) - 1] is positive.
     - If positive, negate nums[abs(nums[i]) - 1].
     - If negative, add abs(nums[i]) to the result array.
   - Return the result array containing duplicates.

# Complexity Analysis
- Time Complexity: O(N), where N is the number of elements in the array.
  - The algorithm requires a single pass through the array.
- Space Complexity: O(1) excluding the result array.
  - The algorithm does not use any extra space proportional to the input size.
