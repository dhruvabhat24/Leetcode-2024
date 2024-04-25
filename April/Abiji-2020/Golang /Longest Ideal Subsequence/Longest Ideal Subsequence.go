

func longestIdealString(s string, k int) int {
	var dp [27]int
	n := len(s)
	for i := n - 1; i >= 0; i-- {
		idx := s[i] - 'a'
		maxi := math.MinInt
		left := max(int(idx)-k, 0)
		right := min(int(idx)+k, 26)
		for j := left; j <= right; j++ {
			maxi = max(maxi, dp[j])
		}
		dp[idx] = maxi + 1
	}

	maxv := math.MinInt
	for i := 0; i < len(dp); i++ {
		if dp[i] > maxv {
			maxv = dp[i]
		}
	}
	return maxv
}

func max(val1 int, val2 int) int {
	if val1 > val2 {
		return val1
	}
	return val2
}

func min(val1 int, val2 int) int {
	if val1 < val2 {
		return val1
	}
	return val2
}

