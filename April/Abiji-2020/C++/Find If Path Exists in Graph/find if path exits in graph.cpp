class Solution {
public:
    // Recursive DFS function to explore the graph
    void dfs(int vertex, vector<vector<int>>& graph, vector<int>& vis) {
        vis[vertex] = 1; // Mark the current vertex as visited
        // Iterate over all adjacent vertices (children)
        for (auto child : graph[vertex]) {
            if (!vis[child]) { // If the child vertex has not been visited
                dfs(child, graph, vis); // Recursively visit the child
            }
        }
    }

    // Function to check if there's a valid path between source and destination
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n); // Adjacency list for the graph
        vector<int> vis(n, 0); // Visited array to keep track of visited vertices, initialized to 0
        
        // Building the graph from the edge list
        for (int i = 0; i < edges.size(); i++) {
            graph[edges[i][0]].push_back(edges[i][1]); // Add an edge from vertex edges[i][0] to edges[i][1]
            graph[edges[i][1]].push_back(edges[i][0]); // Since the graph is undirected, add the reverse edge as well
        }

        // Start DFS from the source vertex
        dfs(source, graph, vis);

        // Check if the destination vertex has been visited
        return vis[destination] == 1;
    }
};
