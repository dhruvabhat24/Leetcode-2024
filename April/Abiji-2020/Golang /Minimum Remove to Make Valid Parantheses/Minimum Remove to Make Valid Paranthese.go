import "strings"

func minRemoveToMakeValid(s string) string {
	arr := []byte(s)
    for i := 0; i < len(arr); i++ {
		if arr[i] == ')' {
			arr[i] = byte(0)
		}
		if arr[i] == '(' {
			i = startBlock(i + 1, arr)
		}
	}

	var response strings.Builder
	for i := 0; i < len(arr); i++ {
		if arr[i] == byte(0) {
			continue
		}

		response.WriteByte(arr[i])
	}
	return response.String()
}

func startBlock(index int, arr []byte) int {
	for i := index; i < len(arr); i++ {
		if arr[i] == ')' {
			return i
		}
		if arr[i] == '(' {
			i = startBlock(i + 1, arr)
		}
	}
	arr[index - 1] = byte(0)
	return len(arr)
}
