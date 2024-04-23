# Problem Statement: Island Perimeter

Given a 2D grid `grid` representing a map of `1`'s (land) and `0`'s (water), calculate the perimeter of the island. The grid is completely surrounded by water, and there is exactly one island. The island is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

## Intuition:

The perimeter of an island can be calculated by counting the number of land cells and subtracting the number of shared sides with neighboring land cells. To do this, we can iterate through each cell of the grid and count the number of islands and shared sides.

## Detailed Approach:

1. Initialize variables to count the number of islands (`islands`) and shared sides with neighboring islands (`neighbour`).
2. Iterate through each cell of the grid.
3. For each land cell (`grid[i][j] == 1`), increment the `islands` count and check if there are neighboring land cells to the left (`grid[i][j-1]`) and above (`grid[i-1][j]`). If there are, increment the `neighbour` count.
4. After iterating through the grid, calculate the perimeter using the formula: `perimeter = islands * 4 - neighbour * 2`.
5. Return the calculated perimeter.

## Complexity Analysis:

- **Time Complexity:** O(N * M), where N is the number of rows and M is the number of columns in the grid. The algorithm iterates through each cell of the grid once.
- **Space Complexity:** O(1) auxiliary space, as the algorithm uses only a constant amount of additional space for variables.
