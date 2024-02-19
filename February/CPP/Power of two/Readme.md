# Power of Two Check

## Class: Solution

This class contains a method `isPowerOfTwo()` to determine whether an integer is a power of two.

### Method: `isPowerOfTwo`

Determines whether the given integer is a power of two.

#### Parameters

- `n`: An integer to be checked for being a power of two.

#### Returns

A boolean value:
- `true` if the input integer is a power of two.
- `false` otherwise.

### Approach

The `isPowerOfTwo()` method checks whether the input integer `n` is a power of two by repeatedly multiplying 1 by 2 until it matches `n` or exceeds it.

1. **Initialization:**
   - Initialize a variable `ans` with the value 1 to represent the base of the power of two.

2. **Power of Two Check:**
   - Iterate through a loop for 30 times (assuming a 32-bit integer), as powers of two greater than `2^30` exceed the range of a 32-bit integer:
     - Check if the current value of `ans` matches the input integer `n`.
     - If they match, return `true`, indicating that `n` is a power of two.
     - Otherwise, multiply `ans` by 2 to get the next power of two and continue the loop.

3. **Return Result:**
   - If no match is found after the loop, return `false`, indicating that the input integer `n` is not a power of two.

The approach efficiently checks whether an integer is a power of two by iteratively comparing it with powers of two up to a certain limit.
