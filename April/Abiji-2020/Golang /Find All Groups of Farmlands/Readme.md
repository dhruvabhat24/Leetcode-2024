# Problem Statement: Find Farmland

Given a 2D grid `land` representing a piece of farmland, where `land[i][j] = 1` represents a plot of land, and `land[i][j] = 0` represents water. Each plot of land is a rectangle with its sides parallel to the coordinate axes. You want to analyze the farmland to find the largest rectangular area of land.

## Intuition:

The problem can be solved using Depth-First Search (DFS) traversal. We can iterate through each cell of the grid and perform DFS to explore adjacent land plots. For each land plot found, we can track the minimum and maximum row and column indices to form the bounding rectangle.

## Detailed Approach:

1. Define a DFS function that recursively traverses the grid starting from a given land plot. This function marks visited land plots and updates the minimum and maximum row and column indices.
2. Implement a helper function to find the maximum of two integers.
3. Iterate through each cell of the grid.
4. For each land plot encountered (`land[i][j] == 1`), initialize variables to track the minimum and maximum row and column indices of the bounding rectangle.
5. Call the DFS function starting from the current land plot to explore adjacent land plots and update the bounding rectangle indices.
6. After DFS traversal, add the bounding rectangle coordinates to the result list.
7. Continue iterating through the grid until all land plots are visited.
8. Return the list of bounding rectangles representing the farmland areas.

## Complexity Analysis:

- **Time Complexity:** O(N * M), where N is the number of rows and M is the number of columns in the grid. The DFS traversal visits each cell of the grid once.
- **Space Complexity:** O(1) auxiliary space (excluding the space required for the output), as the DFS function uses a constant amount of space for variables, and the result list contains the bounding rectangles, which are part of the output.
