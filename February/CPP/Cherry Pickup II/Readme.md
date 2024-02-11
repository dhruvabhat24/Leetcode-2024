# Cherry Pickup

## Class: Solution

This class contains a method to find the maximum number of cherries that can be collected by two robots moving simultaneously in a grid.

### Method: `cherryPickup`

Finds the maximum number of cherries that can be collected by two robots moving simultaneously in a grid.

#### Parameters

- `grid`: A 2D vector representing the grid where each cell contains the number of cherries.

#### Returns

An integer representing the maximum number of cherries that can be collected.

### Approach

The `cherryPickup` method utilizes dynamic programming to find the maximum number of cherries that can be collected by two robots moving simultaneously in the grid.

1. **Initialization:**
   - Initialize variables `m` and `n` to store the number of rows and columns in the grid respectively.
   - Initialize a 3D vector `dp` of size `m x n x n`, where `dp[i][j][k]` represents the maximum number of cherries that can be collected by two robots after `i` steps, with the first robot at row `i`, column `j`, and the second robot at row `i`, column `k`.
   - Initialize `dp[0][0][n-1]` with the sum of cherries in the first row at columns `0` and `n-1`.

2. **Dynamic Programming Iteration:**
   - Iterate from the second row (`i = 1`) to the last row (`i = m-1`).
   - For each row `i`:
      - Iterate through all possible positions for the first robot (`j`) and the second robot (`k`) in the current row.
      - For each pair of positions `(j, k)`:
         - Iterate through all possible combinations of movements (`x` and `y`) for both robots in the previous row (`i-1`).
         - Update the maximum number of cherries that can be collected at position `(j, k)` in the current row by considering all valid movements and collecting cherries from the current cell and the cell where the second robot is positioned.
      - Update the global maximum `ans` with the maximum number of cherries collected at any position in the current row.

3. **Result:**
   - Return `ans`, which represents the maximum number of cherries that can be collected by two robots in the grid.

The approach efficiently computes the maximum number of cherries that can be collected by considering all possible movements of two robots simultaneously using dynamic programming.
