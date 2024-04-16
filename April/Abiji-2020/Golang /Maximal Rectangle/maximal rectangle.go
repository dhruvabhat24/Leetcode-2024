func maximalRectangle(matrix [][]byte) int {
	row := len(matrix)
	if row == 0 {
		return 0
	}
	col := len(matrix[0])
	if row == 1 && col == 1 {
		if matrix[0][0] == '1' {
			return 1
		}
		return 0
	}
	h := make([]int, col+1)
	maxArea := 0
	for i := 0; i < row; i++ {
		st := make([]int, 0)
		for j := 0; j <= col; j++ {
			if j == col || matrix[i][j] == '0' {
				h[j] = 0
			} else {
				h[j]++
			}
			for len(st) != 0 && (j == col || h[j] < h[st[len(st)-1]]) {
				m := st[len(st)-1]
				st = st[:len(st)-1]
				var w int
				if len(st) == 0 {
					w = j
				} else {
					w = j - st[len(st)-1] - 1
				}
				maxArea = max(maxArea, h[m]*w)
			}
			st = append(st, j)
		}
	}
	return maxArea
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}
