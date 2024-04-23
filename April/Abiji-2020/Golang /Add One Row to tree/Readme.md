# Problem Statement: Add One Row to Tree

Given the root of a binary tree, a value `val`, and the depth `depth` of the deepest node, add a row of nodes with value `val` at the given depth `depth`.

## Intuition:

To add a row of nodes at a given depth `depth` in the binary tree, we can perform a depth-first search (DFS) traversal of the tree until the desired depth `depth` is reached. At that depth, we insert new nodes with the given value `val` as children of the existing nodes.

## Detailed Approach:

1. Define a recursive function `solve` that traverses the tree until the desired depth `depth` is reached.
2. If the current depth is equal to `2`, create new nodes with value `val` and insert them as children of the current node. Ensure to maintain the existing children of the current node.
3. Recur for the left and right subtrees, decrementing the depth by `1`.
4. In the public function `addOneRow`, if the depth `depth` is `1`, create a new root node with value `val` and set its left child to the original root.
5. Otherwise, call the `solve` function to add new nodes at the desired depth.
6. Return the updated root of the tree.

## Complexity Analysis:

- **Time Complexity:** O(N), where N is the number of nodes in the binary tree. The algorithm traverses each node once.
- **Space Complexity:** O(H), where H is the height of the binary tree. The space complexity is dominated by the recursive call stack during DFS traversal.
