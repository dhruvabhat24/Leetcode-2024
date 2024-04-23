# Minimum Height Trees

## Problem Statement

Given an undirected tree with \( n \) nodes labeled from \( 0 \) to \( n - 1 \) and an array of undirected edges, `edges`, write a function to find the minimum height of a tree and return the root labels of all minimum height trees. The result should contain as many roots as possible. The height of a tree is the length of the longest path in the tree.

## Intuition

To find the minimum height trees, we need to iteratively prune the leaves of the tree until we are left with one or two nodes. The idea is to keep removing the leaf nodes (nodes with only one neighbor) until we reach the core of the tree, which will be the roots of the minimum height trees.

## Detailed Approach

1. Create an adjacency list (`AL`) to represent the undirected graph and initialize an array `indegree` to store the indegree of each node.
2. Populate the adjacency list and calculate the indegree of each node based on the given edges.
3. Initialize a queue `q` and add all leaf nodes (nodes with indegree = 1) to the queue.
4. Perform a breadth-first search (BFS) starting from the leaf nodes:
   - At each step, remove the current node from the queue and decrement the indegree of its neighbors.
   - If the neighbor becomes a leaf node (indegree = 1), add it to the queue.
   - Repeat until the queue is empty.
5. The nodes remaining in the queue after BFS are the roots of the minimum height trees.
6. Return the roots as the result.

## Complexity Analysis

- **Time Complexity**: \( O(V + E) \), where \( V \) is the number of nodes (vertices) and \( E \) is the number of edges in the graph. The algorithm performs a BFS traversal, which has a linear time complexity.
- **Space Complexity**: \( O(V + E) \) for the adjacency list and indegree array. Additionally, \( O(V) \) space is required for the queue and the answer vector.
