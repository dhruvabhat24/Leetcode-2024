## Class: Solution

This class contains a method `findMaxLength()` to find the maximum length of a contiguous subarray with an equal number of 0s and 1s.

### Method: `findMaxLength`

Finds the maximum length of a contiguous subarray with an equal number of 0s and 1s.

#### Parameters

- `nums`: A vector of integers representing the binary array.

#### Returns

An integer representing the maximum length of a contiguous subarray with an equal number of 0s and 1s.

#### Approach

1. **Initialize Variables:**
   - Initialize `maxLength` to 0 to store the maximum length found.
   - Initialize `count` to 0 to keep track of the difference between the count of 0s and 1s encountered so far.
   - Initialize an unordered map `mp` to store the count `count` and its corresponding index.

2. **Iterate Through the Array:**
   - Traverse the binary array `nums`.
   - For each element in `nums`:
     - If the element is 0, decrement `count` by 1; otherwise, increment `count` by 1.
     - If the current `count` value is found in the map `mp`, update `maxLength` by taking the maximum of the current `maxLength` and the difference between the current index `i` and the index stored in `mp[count]`.
     - If the current `count` value is not found in the map `mp`, add the current `count` value to `mp` with its corresponding index `i`.

3. **Return Result:**
   - Return `maxLength`.

### Time Complexity
- The time complexity of this method is \(O(n)\), where \(n\) is the number of elements in the input array `nums`. The algorithm traverses the array once and performs constant-time operations for each element.

### Space Complexity
- The space complexity of this method is \(O(n)\), where \(n\) is the number of elements in the input array `nums`. The space is used to store the count-index mappings in the unordered map `mp`.
