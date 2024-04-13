## Explanation of the Code:

### Class: Solution

### Method: maximalRectangle

#### Parameters:
- `vec` (vector<vector<char>>&): A 2D vector representing a matrix of characters ('0's and '1's).

#### Returns:
- `int`: The area of the largest rectangle containing only '1's.

#### Variables:
- `n` (int): An integer representing the number of rows in the matrix.
- `m` (int): An integer representing the number of columns in the matrix.
- `pf` (vector<vector<int>>): A 2D vector representing the prefix sum of '1's in the matrix.
- `ans` (int): An integer representing the area of the largest rectangle containing only '1's.

#### Steps:
1. Initialize `n` and `m` to the number of rows and columns in the matrix respectively.
2. Initialize a 2D vector `pf` of size (n+1) x (m+1) to store the prefix sum of '1's in the matrix.
3. Calculate the prefix sum for each row and column of the matrix:
   - Iterate through each row of the matrix:
     - Iterate through each column of the current row:
       - Add the value of `pf[i][j-1]` and 1 if the current element is '1', otherwise add 0.
     - Iterate through each column of the current row:
       - Add the value of `pf[i-1][j]` to the current element.
4. Initialize `ans` to 0 to store the area of the largest rectangle containing only '1's.
5. Iterate through each cell of the matrix:
   - Iterate through each row starting from the current row:
     - If the current cell is not '1', break the loop.
     - Iterate through each column starting from the current column:
       - Call the `check` function to find the maximum area rectangle containing only '1's with the current cell as the top-left corner and update `ans` with the maximum area.
6. Return the value of `ans`.

#### Helper Function: check

##### Parameters:
- `i` (int): The row index of the top-left corner of the rectangle.
- `j` (int): The column index of the top-left corner of the rectangle.
- `i1` (int): The row index of the bottom-right corner of the rectangle.
- `j1` (int): The column index of the bottom-right corner of the rectangle.
- `pf` (vector<vector<int>>&): A reference to the prefix sum 2D vector.

##### Returns:
- `int`: The area of the largest rectangle containing only '1's with the given corners.

##### Steps:
1. Initialize variables `l` and `r` to `j1` and `m` respectively.
2. Initialize `ans` to 0 to store the area of the largest rectangle containing only '1's.
3. Perform binary search on the columns to find the largest rectangle:
   - Calculate the mid column `m` as `(l+r)/2`.
   - Calculate the sum of '1's in the current rectangle as `s = pf[i1][m] + pf[i-1][j-1] - pf[i-1][m] - pf[i1][j-1]`.
   - Calculate the expected sum of '1's in the current rectangle as `s1 = (i1-i+1)*(m-j+1)`.
   - If `s` is equal to `s1`, update `ans` with `s` and update `l` to `m+1`.
   - Otherwise, update `r` to `m-1`.
4. Return `ans`.

#### Example:
- Input: vec = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
- Output: 6
- Explanation: The largest rectangle containing only '1's has an area of 6 units.
