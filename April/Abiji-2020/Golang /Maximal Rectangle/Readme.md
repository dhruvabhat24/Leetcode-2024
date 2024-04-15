# Maximal Rectangle

## Problem Statement
Given a matrix where each element is either '0' or '1', find the largest rectangle containing only '1's and return its area.

## Approach
1. **Handle Base Cases**: Check if the input matrix is empty or has only one element. If so, return the area accordingly.
2. **Initialize Variables**: Initialize variables `h` to store the heights of the current histogram and `maxArea` to store the maximum area encountered so far.
3. **Iterate Through Rows**: Loop through each row of the matrix.
    - For each row:
      - Initialize an empty stack `st` to store the indices of increasing heights encountered.
      - Iterate through each column of the row.
      - Update the histogram heights `h` based on the current element in the matrix:
        - If the current element is '0', set the height to 0.
        - If the current element is '1', increment the height.
      - Calculate the maximum area using the heights and the stack:
        - Pop elements from the stack while the current height is less than the height of the element at the top of the stack.
        - Calculate the width of the rectangle using the current index and the index of the previous element in the stack.
        - Update `maxArea` with the maximum of the current area and the previously calculated area.
      - Push the current index onto the stack.
4. **Return Result**: Return the maximum area encountered.

## Complexity
- Time Complexity: O(m * n), where m is the number of rows and n is the number of columns in the matrix. We iterate through each element of the matrix once.
- Space Complexity: O(n), where n is the number of columns in the matrix. We use additional space for the histogram heights and the stack.
