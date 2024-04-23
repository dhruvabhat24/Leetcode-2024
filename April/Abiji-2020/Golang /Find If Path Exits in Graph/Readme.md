# Problem Statement: Valid Path in an Undirected Graph

Given an undirected graph represented as an adjacency list and two vertices (source and destination), determine whether there is a valid path between them.

## Intuition:

The problem can be solved using Depth-First Search (DFS) traversal. We start DFS from the source vertex and mark all visited vertices. After the DFS traversal, if the destination vertex is marked as visited, there exists a valid path between the source and destination vertices.

## Detailed Approach:

1. Define a DFS function that recursively traverses the graph starting from a given vertex. This function marks visited vertices.
2. Implement a function to check if there is a valid path between the source and destination vertices.
3. Create an adjacency list representation of the graph from the given edge list.
4. Call the DFS function starting from the source vertex.
5. After DFS traversal, check if the destination vertex is marked as visited.
6. Return true if the destination vertex is marked as visited, indicating a valid path exists. Otherwise, return false.

## Complexity Analysis:

- **Time Complexity:** O(V + E), where V is the number of vertices and E is the number of edges. The time complexity of DFS is proportional to the sum of the number of vertices and edges.
- **Space Complexity:** O(V + E), where V is the number of vertices and E is the number of edges. The space complexity is dominated by the space used for representing the graph and the visited array.
