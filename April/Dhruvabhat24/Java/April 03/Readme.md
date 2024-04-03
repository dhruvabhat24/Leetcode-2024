### Explanation:
- The `exist` method iterates over each cell in the board and searches for the starting character of the word. If found, it calls the `wordSearch` method to check if the remaining characters of the word can be found starting from that cell.
- The `wordSearch` method performs depth-first search (DFS) on the board to find the word. It marks visited cells using the `visited` boolean array.
- Four recursive calls are made to explore all possible adjacent cells (up, down, left, and right) from the current cell.
- If the word is found, `true` is returned. Otherwise, `false` is returned.

### Example:
Consider the following board and word:
[['A', 'B', 'C', 'E'],
 ['S', 'F', 'C', 'S'],
 ['A', 'D', 'E', 'E']]


### Iterations:
1. Start searching for the first character 'A'.
2. Once 'A' is found, initiate DFS from that cell to find the rest of the characters in the word.
3. Explore adjacent cells recursively to match the characters of the word.
4. Continue this process until the entire word is matched or until all possible paths are explored.
5. If the entire word is matched, return `true`; otherwise, return `false`.
