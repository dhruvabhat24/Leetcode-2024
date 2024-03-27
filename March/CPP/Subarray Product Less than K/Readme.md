# Intuition
The problem requires finding the number of subarrays in an array whose product is less than a given integer, K. We can solve this problem using the sliding window technique.

# Approach
1. **Sliding Window Technique**:
   - Initialize two pointers, left and right, both pointing to the start of the array.
   - Initialize the product variable to 1 and the count variable to 0.
   - Iterate through the array using the right pointer:
     - Update the product by multiplying it with the current element.
     - If the product is greater than or equal to K, move the left pointer to the right until the product becomes less than K.
     - Update the count by adding 1 plus the difference between the right and left pointers (size of the current subarray).
     - Move the right pointer to the next element.
   - Continue this process until the right pointer reaches the end of the array.
   - Return the count, which represents the number of subarrays with a product less than K.

2. **Handling Edge Cases**:
   - If K is less than or equal to 1, return 0 immediately since no subarray product can be less than 1.

# Complexity Analysis
- Time Complexity: O(N), where N is the number of elements in the input array.
  - Both the left and right pointers traverse the array once.
- Space Complexity: O(1).
  - The algorithm uses only a constant amount of extra space regardless of the input size.
