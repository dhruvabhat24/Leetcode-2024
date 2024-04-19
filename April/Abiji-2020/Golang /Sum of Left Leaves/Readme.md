# Sum of Left Leaves in Binary Tree

Given the root of a binary tree, return the sum of all left leaves.

## Problem Explanation

You're given a binary tree, and you need to find the sum of all the left leaves in the tree. A left leaf is a node that is a leaf (i.e., it has no children) and is located on the left side of its parent node.

For example: 

<img src="https://github.com/Abiji-2020/Leetcode-2024/assets/145255212/123e6e0f-072d-4b30-bc9c-70b0b110c97b">

In this binary tree, the sum of left leaves would be 9 + 15 = 24.

## Intuition

To find the sum of left leaves, we can traverse the tree recursively. While traversing, if we encounter a node whose left child is a leaf, we add its value to the sum. We continue this process recursively for the left and right subtrees.

## Approach

1. Define a recursive function `sumOfLeftLeaves` that takes a TreeNode pointer `root` as input and returns an integer.
2. Check if the root is null. If it is, return 0.
3. Initialize a variable `sum` to 0.
4. Check if the left child of the root exists and if it's a leaf (i.e., it has no left or right children). If it is, add its value to the `sum`.
5. Recursively call `sumOfLeftLeaves` for the left and right subtrees, and add the results to the `sum`.
6. Return the `sum`.

## Complexity Analysis

- Time complexity: O(N), where N is the number of nodes in the binary tree. This is because we traverse each node exactly once.
- Space complexity: O(H), where H is the height of the binary tree. This is the space required for the recursive call stack.

