# Approach
For each node, the diameter is the height of the left node + the height of the right node.
So we use DFS to get the heights recursively, and keep in diameter the maximum seen.

## Complexity
### Time Complexity: O(n)
### Space Complexity: O(n) - for the recursive calls.
