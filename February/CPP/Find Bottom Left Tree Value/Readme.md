## Class: Solution

This class provides a method `findBottomLeftValue` to find the value of the leftmost node in the bottom row of a binary tree.

### Method: `findBottomLeftValue`

Finds the value of the leftmost node in the bottom row of a binary tree.

#### Parameters

- `root`: A pointer to the root of the binary tree.

#### Returns

An integer representing the value of the leftmost node in the bottom row of the binary tree.

#### Approach

1. **Initialization:** Initialize a queue `q` to perform level order traversal and a variable `last` to store the value of the leftmost node in the bottom row.

2. **Level Order Traversal:**
   - Start by pushing the root node into the queue.
   - While the queue is not empty:
     - Get the count of nodes at the current level.
     - Iterate through each node at the current level:
       - Pop the front node from the queue.
       - If it's the first node at the current level (`i == 0`), update `last` with its value.
       - Push the left and right child nodes into the queue if they exist.

3. **Result:**
   - After traversing the entire tree, `last` will contain the value of the leftmost node in the bottom row.

#### Time Complexity
- The time complexity of this method is O(n), where n is the number of nodes in the binary tree, as each node is visited once during the level order traversal.

#### Space Complexity
- This method has a space complexity of O(n), where n is the maximum number of nodes at any level of the binary tree, as the queue `q` can contain at most all the nodes at the lowest level.
