# Problem Analysis
Given a 2D board and a word, determine if the word exists on the board. The word can be constructed from letters of sequentially adjacent cells, where "adjacent" cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

# Approach
The problem can be solved using backtracking. We iterate through each cell on the board and start searching for the word from that cell using recursive backtracking. We mark each visited cell to ensure that the same cell is not visited more than once during the search. If we find the word starting from any cell, we return true; otherwise, we return false.

1. **Initialize Visited Array**: Create a 2D boolean array to keep track of visited cells. Initially, mark all cells as unvisited.
2. **Convert Word to Character Array**: Convert the word into a character array for easier manipulation.
3. **Check Quick Fail Conditions**: If the length of the word exceeds the total number of cells on the board, it's impossible for the word to exist on the board. In such cases, return false.
4. **Count Character Occurrences**: Count the occurrence of each character on the board and adjust the order of characters in the word based on their frequency counts to optimize search.
5. **Decrease Counts of Characters**: Iterate through the character array of the word and decrease the counts of characters on the board. If there are more occurrences of a character in the word than on the board, return false.
6. **Start Search**: Iterate through each cell on the board and recursively search for the word starting from that cell. If the word is found, return true; otherwise, return false.

# Time Complexity
The time complexity is O(N * M * 4^L), where N is the number of rows, M is the number of columns, and L is the length of the word. In the worst case, we explore all possible paths from each cell in the board.

# Space Complexity
The space complexity is O(N * M) for the visited array, where N is the number of rows and M is the number of columns in the board.
