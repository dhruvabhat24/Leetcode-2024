# Find Bottom Left Value in Binary Tree

The `Solution` class contains a method `findBottomLeftValue` that aims to find and return the value of the leftmost node in the bottom level of a binary tree.

## Algorithm
1. The code uses a queue (`q`) to perform a level-order traversal of the binary tree.
2. It starts from the root node and iteratively dequeues nodes while enqueueing their right and left children.
3. As the traversal progresses, the leftmost node at the bottom level will eventually be the last node dequeued.
4. The final value of this leftmost node is returned as the result.

## Example
Consider using this method with a binary tree to find the bottom left value:

```python
# Example usage
root = TreeNode(2, TreeNode(1), TreeNode(3))
solution = Solution()
result = solution.findBottomLeftValue(root)
print(result)  # Output: 1
