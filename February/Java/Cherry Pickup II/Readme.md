```java
class Solution {
    public int cherryPickup(int[][] grid) {
        // Define movement directions
        int dir[] = new int[]{-1, 0, 1};

        // Get grid dimensions
        int row = grid.length;
        int col = grid[0].length;

        // Create 3D DP table to store max cherries collected for each cell combination
        int dp[][][] = new int[row][col][col]; 
        
        // Initialize DP table with -1 (unvisited)
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                for(int k = 0; k < col; k++){
                    dp[i][j][k] = -1;
                }
            }
        }

        // Set starting positions (top left and top right corners)
        int col1 = 0; 
        int col2 = col - 1; 

        // Set initial value for DP table considering both cherries at starting positions
        dp[0][col1][col2] = grid[0][col1] + grid[0][col2]; 
        int max = dp[0][col1][col2]; 

        // Iterate through each row (starting from row 1)
        for(int i = 1; i < row; i++){ 
            for(int c1 = 0; c1 < col; c1++){ // Iterate through possible positions for robot 1 in current row
                for(int c2 = 0; c2 < col; c2++){ // Iterate through possible positions for robot 2 in current row
                    int prev = dp[i - 1][c1][c2]; // Access the maximum cherries collected at previous positions
                    if(prev >= 0){ // Check if previous position is valid (visited and has cherries)
                        for(int d1: dir){ // Iterate through possible movements for robot 1
                            col1 = d1 + c1; // Calculate new position for robot 1
                            for(int d2: dir){ // Iterate through possible movements for robot 2
                                col2 = d2 + c2; // Calculate new position for robot 2
                                if(inRange(col1, col) && inRange(col2, col)){ // Check if new positions are within grid boundaries
                                    // Update DP table with maximum cherries at current position, considering:
                                    // - Previous cherries collected
                                    // - Cherries at current positions (adding both if robots are at the same cell)
                                    dp[i][col1][col2] = Math.max(dp[i][col1][col2], prev+(col1 == col2 ? grid[i][col1] : (grid[i][col1] + grid[i][col2])));
                                    // Update maximum cherries collected overall
                                    max = Math.max(max, dp[i][col1][col2]); 
                                }
                            }
                        }
                    }
                    
                }
            }
        }
        return max;
    }

    public boolean inRange(int val, int limit){
        return 0 <= val && val < limit;
    }
}
```
