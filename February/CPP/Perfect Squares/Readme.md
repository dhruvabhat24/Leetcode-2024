# Perfect Squares

## Class: Solution

This class contains a method to find the minimum number of perfect square numbers that sum up to a given integer.

### Method: `numSquares`

Calculates the minimum number of perfect square numbers that sum up to the given integer.

#### Parameters

- `n`: An integer representing the target sum.

#### Returns

An integer representing the minimum number of perfect square numbers that sum up to the target sum.

### Approach

The `numSquares` method utilizes tabulation to solve the problem efficiently.

1. **Tabulation Approach:**
   - Initialize a dynamic programming (DP) array `dp` of size `n + 1` and fill it with -1, where `dp[i]` represents the minimum number of perfect square numbers that sum up to `i`.
   - Set `dp[0]` to 1, as the sum of zero perfect square numbers is zero.
   - Iterate from `1` to `n`:
      - Initialize variables `start` to 1 and `end` to the square root of `n`.
      - Initialize `result` to `INT_MAX`.
      - Iterate from `start` to `end`:
         - Calculate the square of the current number (`numsquare`).
         - If `i - numsquare` is greater than or equal to 0:
            - Calculate the number of perfect square numbers needed for the remaining sum (`1 + dp[i - numsquare]`).
            - Update `result` with the minimum of the current result and the calculated answer.
      - Set `dp[i]` to `result`.
   - Return `dp[n] - 1`, as the problem asks for the minimum number of perfect square numbers, and we have counted zero as 1 in `dp[0]`.

The approach efficiently calculates the minimum number of perfect square numbers that sum up to the target integer using tabulation. It iterates through each integer from `1` to `n` and considers all possible perfect square numbers to find the minimum number needed to reach the target sum.
