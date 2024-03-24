# Intuition
To find a duplicate element in the given array, we can leverage the fact that the numbers in the array are between 1 and n, where n is the size of the array. We can utilize the array itself to mark visited elements. 

# Approach
1. **Loop until Duplicate is Found**:
   - We loop through the array until a duplicate is found at the index `0`.

2. **Swapping Elements**:
   - Inside the loop, we continuously swap the current element with the element at the index `nums[nums[0]]`. This effectively places each element in its correct position, considering the array as a permutation of numbers from 1 to n.

3. **Finding the Duplicate**:
   - When the loop terminates, it implies that the duplicate value is at the index `0`. We return this value as the duplicate found.

# Complexity Analysis
- Time Complexity: O(n), where n is the size of the input array. In the worst case, each element may need to be swapped once.
- Space Complexity: O(1), as we modify the input array in-place without using any extra space.
