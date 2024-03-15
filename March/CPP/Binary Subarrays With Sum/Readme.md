## Class: Solution

This class contains a method `numSubarraysWithSum()` to count the number of contiguous subarrays of an array whose sum equals a given target.

### Method: `numSubarraysWithSum`

Counts the number of contiguous subarrays of an array whose sum equals a given target.

#### Parameters

- `nums`: A vector of integers representing the input array.
- `goal`: An integer representing the target sum.

#### Returns

An integer representing the count of contiguous subarrays whose sum equals the given target.

#### Helper Function: `atMost`

Calculates the count of subarrays with sum at most the given goal.

##### Parameters

- `nums`: A vector of integers representing the input array.
- `goal`: An integer representing the target sum.

##### Returns

An integer representing the count of subarrays whose sum is at most the given goal.

##### Approach

1. **Initialize Variables:**
   - Initialize `head`, `tail`, `sum`, and `result` variables to track the sliding window.

2. **Sliding Window Approach:**
   - Iterate through the `nums` array using the `head` pointer.
   - Increment `sum` by adding the element at the current `head` position.
   - While the `sum` is greater than the `goal` and `tail` is less than or equal to `head`, decrement `sum` by subtracting the element at the current `tail` position and increment `tail`.
   - Update `result` by adding the length of the current subarray (`head - tail + 1`).

3. **Return Result:**
   - Return the calculated `result`.

### Time Complexity
- The time complexity of this method is \(O(n)\), where \(n\) is the length of the `nums` array, as it iterates through the array once using the sliding window approach.

### Space Complexity
- The space complexity of this method is \(O(1)\), as it only requires a constant amount of extra space for storing intermediate variables.
