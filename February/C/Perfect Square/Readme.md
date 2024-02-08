## Intuition
The function numSquares(n) returns the minimum number of perfect square numbers needed to sum up to n.
It uses dynamic programming (dp) to iteratively compute this minimum.
For each number i from 1 to n, it considers all possible perfect squares less than or equal to i (j*j) and updates dp[i] to be the minimum of its current value and 1 + dp[i - j*j].
Finally, it returns dp[n], which holds the minimum number of perfect squares required to sum up to n.


## Approach
Bottom Up DP Approach

## Complexity
### Time complexity: O(Nsqrt(N))

### Space complexity: O(N)
