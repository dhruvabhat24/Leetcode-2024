#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int cherryPickup(int** grid, int gridSize, int* gridColSize) {
    int m = gridSize, n = gridColSize[0];
    int ***dp = (int ***)malloc(m * sizeof(int **));
    for (int i = 0; i < m; ++i) {
        dp[i] = (int **)malloc(n * sizeof(int *));
        for (int j = 0; j < n; ++j) {
            dp[i][j] = (int *)malloc(n * sizeof(int));
            for (int k = 0; k < n; ++k) {
                dp[i][j][k] = -1;
            }
        }
    }
    dp[0][0][n-1] = grid[0][0] + grid[0][n-1];
    int ans = 0;
    for(int i = 1; i < m; ++i) {
        for(int j = 0; j < n; ++j) { 
            for(int k = j+1; k < n; ++k) { 
                for(int x = -1; x <= 1; ++x) { 
                    for(int y = -1; y <= 1; ++y) {
                        int nj = j + x, nk = k + y;
                        if(nj >= 0 && nj < n && nk >= 0 && nk < n) {
                            int prev = dp[i-1][nj][nk];
                            if(prev != -1) {
                                dp[i][j][k] = max(dp[i][j][k], prev + grid[i][j] + (j != k ? grid[i][k] : 0));
                            }
                        }
                    }
                }
                if(ans < dp[i][j][k]) ans = dp[i][j][k];
            }
        }
    }
    
    // Free the allocated memory
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            free(dp[i][j]);
        }
        free(dp[i]);
    }
    free(dp);
    
    return ans;
}

