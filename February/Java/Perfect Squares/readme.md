## Finding Minimum Perfect Squares using Dynamic Programming

This explanation utilizes dynamic programming to find the minimum number of perfect squares that sum up to a given number `n`.

**Initialization:**

1. Define a vector `dp` of size `n + 1`.
2. Initialize all elements of `dp` to `INT_MAX`, except `dp[0]` which is set to `0`. This reflects that 0 can be formed using 0 perfect squares.

**Iterative Calculation:**

1. Iterate through `i` from 1 to `n`.
2. For each `i`:
    - Iterate through all perfect squares `j * j` less than or equal to `i` (where `j` goes from 1 to `sqrt(i)`).
    - Calculate `dp[i]` as the minimum between its current value and `dp[i - j * j] + 1`.
    - This considers using the perfect square `j * j` once and the remaining sum (`i - j * j`) built using the minimum number of perfect squares according to `dp[i - j * j]`.

**Updating `dp[i] :**

- The chosen minimum value gets stored in `dp[i]`. This represents the minimum number of perfect squares needed to form the sum `i`.

**Complexity:**

- Time complexity: O(n * sqrt(n)) due to nested loops iterating up to `n` and `sqrt(n)`.
- Space complexity: O(n) for storing the `dp` vector.

**Example:**

Consider `n = 12`.

- `dp[0] = 0` (0 requires 0 squares).
- For `i = 1`, no perfect squares are less than or equal to 1, so `dp[1] = INT_MAX`.
- For `i = 2`, the only perfect square is 1, and `dp[2 - 1 * 1] = dp[1] = INT_MAX`, so `dp[2] = INT_MAX`.
- For `i = 3`, the only perfect square is 1, and `dp[3 - 1 * 1] = dp[2] = INT_MAX`, so `dp[3] = INT_MAX`.
- ...
- For `i = 9`, `dp[9 - 4 * 4] = 1` (using 4^2 once), so `dp[9] = 1 + 1 = 2`.
- For `i = 10`, `dp[10 - 3 * 3] = 1` (using 3^2 once), so `dp[10] = 1 + 1 = 2`.
- For `i = 11`, `dp[11 - 4 * 4] = 1` and `dp[11 - 3 * 3] = 1`, so `dp[11] = min(1 + 1, 1 + 1) = 2`.
- Finally, for `i = 12`, `dp[12 - 4 * 4] = 1` and `dp[12 - 3 * 3] = 2`, so `dp[12] = min(1 + 1, 2 + 1) = 3`.

Therefore, 3 is the minimum number of perfect squares required to sum up to 12 (e.g., 4^2 + 3^2 + 1^2).

This approach efficiently solves the problem using dynamic programming by storing and reusing intermediate results, avoiding redundant calculations.
