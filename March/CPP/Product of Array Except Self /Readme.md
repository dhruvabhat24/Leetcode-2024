## Class: Solution

This class contains a method `productExceptSelf()` to calculate the product of all elements in the array except the current element itself.

### Method: `productExceptSelf`

Calculates the product of all elements in the array except the current element itself.

#### Parameters

- `nums`: A vector of integers representing the input array.

#### Returns

A vector of integers representing the product of all elements in the array except the current element itself.

#### Approach

1. **Initialize Left Array:**
   - Initialize an array `left` of size `n`, where `n` is the size of the input array `nums`.
   - Set `left[0] = 1`.
   - Iterate from index 1 to `n - 1`:
     - Set `left[i] = left[i - 1] * nums[i - 1]`.

2. **Initialize Right Array:**
   - Initialize an array `right` of size `n`, where `n` is the size of the input array `nums`.
   - Set `right[n - 1] = 1`.
   - Iterate from index `n - 2` to 0:
     - Set `right[i] = right[i + 1] * nums[i + 1]`.

3. **Calculate Result:**
   - Initialize an array `result` of size `n`.
   - Iterate through the input array `nums`:
     - Set `result[i] = left[i] * right[i]`.

4. **Return Result:**
   - Return the `result` array.

### Time Complexity
- The time complexity of this method is \(O(n)\), where \(n\) is the size of the input array `nums`.

### Space Complexity
- The space complexity of this method is \(O(n)\), where \(n\) is the size of the input array `nums`, as it uses additional arrays `left`, `right`, and `result`.
