# Bitwise AND of Range

## Class: Solution

This class contains a method `rangeBitwiseAnd()` to perform bitwise AND of a range of integers.

### Method: `rangeBitwiseAnd`

Performs bitwise AND of a range of integers.

#### Parameters

- `left`: An integer representing the left endpoint of the range.
- `right`: An integer representing the right endpoint of the range.

#### Returns

An integer representing the bitwise AND of all integers in the range `[left, right]`.

### Approach

The `rangeBitwiseAnd()` method iterates through the range `[left, right]` by right-shifting both `left` and `right` until they are equal. During each iteration, it increments a counter `num` to keep track of the number of right shifts performed.

1. **Iterative Right Shift:**
   - While `left` is not equal to `right`, perform the following steps:
     - Right shift both `left` and `right` by one position.
     - Increment the counter `num` by one.

2. **Bitwise AND Result:**
   - After both `left` and `right` are equal, left shift `left` by `num` positions to restore the common bits that were removed during the right shifts.
   - Return the result obtained after left shifting `left`.

The approach efficiently calculates the bitwise AND of a range of integers by iteratively right-shifting both endpoints until they become equal, and then left-shifting one of the endpoints to restore the common bits.
