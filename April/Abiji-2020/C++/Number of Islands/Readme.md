# Problem Statement: Number of Islands

Given a 2D grid `grid` containing `'1'` (land) and `'0'` (water), count the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are surrounded by water.

## Intuition:

The problem can be solved using Depth-First Search (DFS) traversal. We can iterate through each cell of the grid and perform DFS to explore adjacent land cells. Each time we encounter a land cell during DFS traversal, we mark it as visited and explore its neighboring land cells. The number of DFS calls corresponds to the number of islands in the grid.

## Detailed Approach:

1. Define a DFS function that recursively traverses the grid starting from a given land cell. During DFS traversal, mark visited land cells as water to prevent revisiting them.
2. Implement a public function `numIslands` that iterates through each cell of the grid.
3. For each land cell encountered (`grid[i][j] == '1'`), increment the island count and call the DFS function to explore the island.
4. After DFS traversal, continue iterating through the grid until all land cells are visited.
5. Return the total number of islands counted during traversal.

## Complexity Analysis:

- **Time Complexity:** O(N * M), where N is the number of rows and M is the number of columns in the grid. The DFS traversal visits each cell of the grid once.
- **Space Complexity:** O(N * M) for the recursive DFS calls, where N is the number of rows and M is the number of columns in the grid. Additionally, O(1) auxiliary space is required for other variables.
