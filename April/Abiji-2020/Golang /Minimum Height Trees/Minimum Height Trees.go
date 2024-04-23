

func findMinHeightTrees(n int, edges [][]int) []int {
	if n == 1 {
		return []int{0}
	}

	// Create adjacency list and indegree slice
	AL := make([][]int, n)
	indegree := make([]int, n)

	// Populate adjacency list and calculate indegrees
	for _, edge := range edges {
		a, b := edge[0], edge[1]
		AL[a] = append(AL[a], b)
		AL[b] = append(AL[b], a)
		indegree[a]++
		indegree[b]++
	}

	// Initialize queue
	q := make([]int, 0)
	for i := 0; i < n; i++ {
		if indegree[i] == 1 {
			q = append(q, i)
		}
	}

	var ans []int

	// BFS
	for len(q) > 0 {
		sz := len(q)
		ans = []int{}
		for sz > 0 {
			curr := q[0]
			ans = append(ans, curr)
			q = q[1:]
			sz--

			for _, n := range AL[curr] {
				indegree[n]--
				if indegree[n] == 1 {
					q = append(q, n)
				}
			}
		}
	}

	return ans
}
