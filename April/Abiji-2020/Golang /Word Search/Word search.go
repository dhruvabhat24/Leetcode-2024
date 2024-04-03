func exist(board [][]byte, word string) bool {
    n := len(board)
    m := len(board[0])
    
    visited := make([][]bool, n)
    for i := range visited {
        visited[i] = make([]bool, m)
    }
    
    wordChar := []byte(word)
    
    if len(wordChar) > n*m {
        return false
    }
    
    counts := make([]int, 256)
    for i := 0; i < n; i++ {
        for j := 0; j < m; j++ {
            counts[board[i][j]]++
        }
    }
    
    len := len(wordChar)
    for i := 0; i < len/2; i++ {
        if counts[wordChar[i]] > counts[wordChar[len-1-i]] {
            for j := 0; j < len/2; j++ {
                wordChar[j], wordChar[len-1-j] = wordChar[len-1-j], wordChar[j]
            }
            break
        }
    }
    
    for _, c := range wordChar {
        if counts[c]--; counts[c] < 0 {
            return false
        }
    }
    
    for i := 0; i < n; i++ {
        for j := 0; j < m; j++ {
            if visit(board, wordChar, 0, i, j, n, m, visited) {
                return true
            }
        }
    }
    return false
}

func visit(board [][]byte, word []byte, start, x, y, n, m int, visited [][]bool) bool {
    if start == len(word) {
        return true
    }

    if x < 0 || x >= n || y < 0 || y >= m || visited[x][y] {
        return false
    }

    if word[start] != board[x][y] {
        return false
    }

    visited[x][y] = true

    found := visit(board, word, start+1, x+1, y, n, m, visited) ||
             visit(board, word, start+1, x-1, y, n, m, visited) ||
             visit(board, word, start+1, x, y+1, n, m, visited) ||
             visit(board, word, start+1, x, y-1, n, m, visited)

    visited[x][y] = false

    return found
}
