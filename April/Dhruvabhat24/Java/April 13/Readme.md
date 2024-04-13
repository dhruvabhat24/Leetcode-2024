## Explanation of the Code:

### Class: Solution

### Method: maximalRectangle

#### Parameters:
- `matrix` (char[][]): A 2D array representing a matrix of '0's and '1's.

#### Returns:
- `int`: The area of the largest rectangle containing only '1's.

#### Variables:
- `m` (int): The number of rows in the matrix.
- `n` (int): The number of columns in the matrix.
- `left` (int[]): An array to store the left boundary of the current rectangle containing only '1's for each column.
- `right` (int[]): An array to store the right boundary of the current rectangle containing only '1's for each column.
- `height` (int[]): An array to store the height of the current rectangle containing only '1's for each column.
- `maxArea` (int): A variable to store the maximum area of the rectangle containing only '1's.

#### Steps:
1. Check if the matrix is empty. If it is, return 0 as there are no '1's.
2. Initialize variables `m` and `n` to store the number of rows and columns in the matrix respectively.
3. Initialize arrays `left`, `right`, and `height` of size `n` to store the left boundary, right boundary, and height of the rectangle containing only '1's for each column respectively.
4. Fill the `right` array with `n` initially, indicating that there is no right boundary.
5. Initialize `maxArea` to 0 to store the maximum area of the rectangle containing only '1's.
6. Iterate through each row of the matrix:
   - Initialize variables `curLeft` and `curRight` to store the current left and right boundaries respectively.
   - Iterate through each column of the current row:
     - If the current element is '1':
       - Increment the height of the rectangle for the current column.
       - Update the left boundary of the rectangle for the current column as the maximum of the current left boundary and `curLeft`.
     - If the current element is '0':
       - Reset the height of the rectangle for the current column to 0.
       - Reset the left boundary of the rectangle for the current column to 0.
       - Update `curLeft` to the next column (j + 1).
   - Iterate through each column of the current row in reverse order:
     - If the current element is '1':
       - Update the right boundary of the rectangle for the current column as the minimum of the current right boundary and `curRight`.
     - If the current element is '0':
       - Reset the right boundary of the rectangle for the current column to `n`.
       - Update `curRight` to the current column.
   - Iterate through each column of the matrix:
     - Update `maxArea` as the maximum of `maxArea` and the area of the rectangle containing only '1's in the current column.
       - The area of the rectangle can be calculated as `(right[j] - left[j]) * height[j]`.
7. After iterating through all rows, return the value of `maxArea`.

#### Example:
- Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
- Output: 6
- Explanation: The largest rectangle containing only '1's has an area of 6 units.
