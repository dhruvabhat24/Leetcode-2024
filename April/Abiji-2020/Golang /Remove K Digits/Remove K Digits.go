
func removeKdigits(num string, k int) string {
	var stack []rune

	for _, digit := range num {
		for len(stack) > 0 && k > 0 && stack[len(stack)-1] > digit {
			stack = stack[:len(stack)-1]
			k--
		}
		stack = append(stack, digit)
	}

	// Remove remaining k digits from the end of the stack
	stack = stack[:len(stack)-k]

	// Construct the resulting string from the stack
	result := strings.Builder{}
	for _, r := range stack {
		result.WriteRune(r)
	}

	// Remove leading zeros
	resultStr := strings.TrimLeft(result.String(), "0")

	// If the result is empty, return "0"
	if resultStr == "" {
		return "0"
	}

	return resultStr
}
