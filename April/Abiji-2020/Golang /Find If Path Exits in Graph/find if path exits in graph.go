func dfs(vertex int, graph [][]int, vis []int) {
	vis[vertex] = 1
	for _, child := range graph[vertex] {
		if vis[child] == 0 {
			dfs(child, graph, vis)
		}
	}
}

func validPath(n int, edges [][]int, source, destination int) bool {
	graph := make([][]int, n)
	vis := make([]int, n)

	for _, edge := range edges {
		graph[edge[0]] = append(graph[edge[0]], edge[1])
		graph[edge[1]] = append(graph[edge[1]], edge[0])
	}

	dfs(source, graph, vis)

	return vis[destination] == 1
}
