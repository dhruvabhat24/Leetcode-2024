func makeGood(s string) string {
sb := []rune(s)
	stack := make([]byte, 0)

	if len(sb) > 1 {

		for i, _ := range s {

			n := len(stack) 

			if n > 0 && ((s[i]-stack[n-1] == 32) || (stack[n-1]-s[i] == 32)) {

				stack = stack[:n-1]

			} else {
				stack = append(stack, s[i])
			}
		}
		return string(stack)

	} else {
		return s
	}

}
