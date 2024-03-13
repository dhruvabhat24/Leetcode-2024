## Class: Solution

This class contains a method `pivotInteger()` to find the pivot integer of a given integer `n`.

### Method: `pivotInteger`

Finds the pivot integer of a given integer `n`.

#### Parameters

- `n`: An integer representing the input number.

#### Returns

- An integer representing the pivot integer of the input number.
- Returns `-1` if the input number doesn't have a valid pivot integer.

#### Approach

1. **Calculate the Sum of Integers:**
   - Calculate the sum of integers from 1 to `n` using the formula \( \frac{n \times (n + 1)}{2} \).
2. **Find Square Root:**
   - Calculate the square root of the sum obtained in step 1.
3. **Check Validity:**
   - If the square root is not an integer (i.e., there is no valid pivot integer), return `-1`.
   - Otherwise, return the integer value of the square root.

#### Time Complexity
- Calculating the sum of integers takes \(O(1)\) time.
- Finding the square root takes \(O(1)\) time.
- Therefore, the overall time complexity is \(O(1)\).

#### Space Complexity
- The space complexity of this method is \(O(1)\), as it only requires a constant amount of extra space for storing intermediate variables.
