## Class: Solution

This class provides a method `isEvenOddTree` to determine whether a binary tree is an even-odd tree.

### Method: `isEvenOddTree`

Determines whether a binary tree is an even-odd tree.

#### Parameters

- `root`: A pointer to the root of the binary tree.

#### Returns

A boolean value:
- `true` if the binary tree is an even-odd tree.
- `false` otherwise.

#### Approach

1. **Initialization:**
   - Initialize a queue to perform level-order traversal of the binary tree.
   - Initialize a variable `level` to track the current level of the tree.

2. **Level-order Traversal:**
   - Start by pushing the root node into the queue.
   - While the queue is not empty, repeat the following steps:
     - Get the size of the current level.
     - Initialize a variable `prev_val` to store the value of the previous node in the level. For even levels, initialize it to the minimum possible integer value; for odd levels, initialize it to the maximum possible integer value.
     - Iterate through all nodes in the current level:
       - Dequeue a node from the queue.
       - Check if the current node's value satisfies the conditions for an even-odd tree:
         - For even levels, the value must be odd and greater than the previous node's value.
         - For odd levels, the value must be even and less than the previous node's value.
         - If the conditions are not met, return `false`.
       - Update `prev_val` with the current node's value.
       - Enqueue the left and right children of the current node, if they exist.

3. **Result:**
   - If all nodes in the binary tree satisfy the conditions for an even-odd tree, return `true`.
   - Otherwise, return `false`.

#### Time Complexity
- The time complexity of this method is O(n), where n is the number of nodes in the binary tree, as it performs a level-order traversal of the entire tree.

#### Space Complexity
- The space complexity of this method is O(n), where n is the maximum number of nodes at any level of the binary tree, as it uses a queue to store nodes during traversal.

