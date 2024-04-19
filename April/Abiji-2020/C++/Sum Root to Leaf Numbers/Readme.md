# Sum of Root to Leaf Numbers in Binary Tree

Given the root of a binary tree, each node in the tree has a value represented by a single digit. Return the total sum of all root-to-leaf numbers.

## Problem Explanation

You're given a binary tree where each node represents a single digit. You need to find the total sum of all root-to-leaf numbers. Each root-to-leaf number represents a path from the root to a leaf node, where each digit along the path forms a number. The total sum is the sum of all these numbers.

For example: 


<img src="https://github.com/Abiji-2020/Leetcode-2024/assets/145255212/aee5ccfa-2814-471b-9a83-2b3d53099b27">

In this binary tree, the sum of root-to-leaf numbers would be 12 + 13 = 25.

## Intuition

To find the sum of root-to-leaf numbers, we can perform a depth-first traversal of the binary tree. During traversal, we maintain a current number formed by the digits encountered so far. When we reach a leaf node, we add the current number to the total sum. We continue this process recursively for the left and right subtrees.

## Approach

1. Define a recursive function `sumroot` that takes a TreeNode pointer `root` and an integer `sum` as input and returns an integer.
2. Inside `sumroot`, check if the `root` is not null.
3. If `root` is not null, multiply the current `sum` by 10 (to shift the digits) and add the value of the `root` node to it.
4. Check if the `root` is a leaf node (i.e., it has no left or right children). If it is, return the `sum` (representing the number formed from root to leaf).
5. Recursively call `sumroot` for the left and right subtrees, adding the results to `grat` (short for "grand total").
6. Return `grat`.

## Public Function

1. Define a public function `sumNumbers` that takes a TreeNode pointer `root` as input and returns an integer.
2. Call the `sumroot` function with `root` and an initial `sum` value of 0 and return the result.

## Complexity Analysis

- Time complexity: O(N), where N is the number of nodes in the binary tree. This is because we traverse each node exactly once.
- Space complexity: O(H), where H is the height of the binary tree. This is the space required for the recursive call stack.

