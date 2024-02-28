# Approach
The code recursively finds the value of the bottom-left node in a binary tree, tracking the current depth and leftmost value at each level.

Parameters: Accepts root (current node) and currD (current depth) as parameters.<br>
Base Case: Checks if the current node (root) is NULL. Returns from the function if the node is NULL.<br>
Depth Update: Checks if the current depth (currD) is greater than the previous maximum depth. If true, updates both depth and left variables with values corresponding to the new level. <br>
Recursive Calls: Regardless of depth updates, recursively calls the function on both left and right subtrees. Increments currD by 1 for each recursive call.<br>
Result: After all recursive calls finish, returns the leftmost value (left) and its level (depth).<br>

## Complexity
### Time Complexity: O(N)
### Space Complexity: O(N) 
