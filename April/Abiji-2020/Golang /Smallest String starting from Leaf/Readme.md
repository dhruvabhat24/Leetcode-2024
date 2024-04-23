# Problem Statement: Smallest String Starting From Leaf

Given the `root` of a binary tree, each node has a value from `0` to `25` representing the letters `'a'` to `'z'`: a value of `0` represents `'a'`, a value of `1` represents `'b'`, and so on.

Find the lexicographically smallest string that starts at a leaf of this tree and ends at the root.

(As a reminder, any shorter prefix of a string is lexicographically smaller: for example, `"ab"` is lexicographically smaller than `"aba"`.  A leaf of a node is a node that has no children.)

## Intuition:

The problem can be solved using Depth-First Search (DFS) traversal. We can perform a depth-first search from the root to each leaf node, concatenating the characters along the path. After reaching each leaf node, we can compare the resulting string with the current smallest string and update it if necessary.

## Detailed Approach:

1. Define a DFS function that recursively traverses the binary tree, concatenating characters along the path from the root to each leaf node. During DFS traversal, track the current smallest string encountered.
2. In the DFS function, if the current node is a leaf node, reverse the concatenated string and compare it with the current smallest string. Update the smallest string if necessary.
3. Recur for the left and right subtrees.
4. In the `smallestFromLeaf` function, initialize an empty string `smallest`.
5. Call the DFS function with the root node, an empty string as the initial path, and the `smallest` string.
6. Return the smallest string found.

## Complexity Analysis:

- **Time Complexity:** O(N * H), where N is the number of nodes in the binary tree and H is the height of the tree. The DFS traversal visits each node once, and the reversal operation takes linear time proportional to the height of the tree.
- **Space Complexity:** O(H), where H is the height of the tree. The space complexity is dominated by the recursive call stack during DFS traversal.
