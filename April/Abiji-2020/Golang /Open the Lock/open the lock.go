
func openLock(deadends []string, target string) int {
	pow10 := []int{1, 10, 100, 1000}
	visit := make(map[int]int)

	for _, dead := range deadends {
		deadNum, _ := strconv.Atoi(dead)
		visit[deadNum] = 2
	}

	dest, _ := strconv.Atoi(target)
	if visit[0] == 2 || visit[dest] == 2 {
		return -1
	}
	if 0 == dest {
		return 0
	}

	src, steps, dir := 0, 0, 1
	forward, backward := make([]int, 0), make([]int, 0)
	forward = append(forward, src)
	visit[src] = 1
	backward = append(backward, dest)
	visit[dest] = -1

	for len(forward) > 0 && len(backward) > 0 {
		if len(forward) > len(backward) {
			forward, backward = backward, forward
			dir = -dir
		}
		steps++
		size := len(forward)
		for size > 0 {
			curr := forward[0]
			forward = forward[1:]
			size--
			for _, p := range pow10 {
				d := (curr / p) % 10
				for _, i := range []int{-1, 1} {
					z := d + i
					if z == -1 {
						z = 9
					} else if z == 10 {
						z = 0
					}
					next := curr + (z-d)*p
					if visit[next] == -dir {
						return steps
					}
					if visit[next] == 0 {
						forward = append(forward, next)
						visit[next] = dir
					}
				}
			}
		}
	}
	return -1
}
