func dfs(land [][]int, i, j int, gx, gy *int) {
	n, m := len(land), len(land[0])
	if i >= 0 && j >= 0 && i < n && j < m && land[i][j] == 1 {
		land[i][j] = 0
		*gx, *gy = max(*gx, i), max(*gy, j)
		dfs(land, i+1, j, gx, gy)
		dfs(land, i-1, j, gx, gy)
		dfs(land, i, j+1, gx, gy)
		dfs(land, i, j-1, gx, gy)
	}
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func findFarmland(land [][]int) [][]int {
	n, m := len(land), len(land[0])
	ans := [][]int{}
	for i := 0; i < n; i++ {
		for j := 0; j < m; j++ {
			if land[i][j] == 1 {
				lx, ly, gx, gy := i, j, i, j
				dfs(land, i, j, &gx, &gy)
				ans = append(ans, []int{lx, ly, gx, gy})
			}
		}
	}
	return ans
}
