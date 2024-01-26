class Solution {
    private static final int MOD = 1_000_000_007;
    private int rows;
    private int cols;
    private static final int[][] directions = {{1,0},{0,1},{-1,0},{0,-1}};
    public int findPaths(int rows, int cols, int maxMove, int startRow, int startColumn) {
        this.rows = rows;
        this.cols = cols;
        long[][][] dp = new long[rows][cols][maxMove+1];
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++)
                Arrays.fill(dp[i][j],-1);
        }
        return (int)fun(startRow,startColumn,0,maxMove,dp);
    }
    private long fun(int r, int c, int currentMoves, int maxMove,long[][][] dp){
        long ways = 0L;
        if(currentMoves > maxMove) return 0L;
        if(isBallOutside(r,c)) return 1L;
        if(dp[r][c][currentMoves] != -1) return dp[r][c][currentMoves];
        for(int[] dir: directions){
            ways = (ways + fun(r+dir[0],c+dir[1],currentMoves+1,maxMove,dp))%MOD;
        }
        return dp[r][c][currentMoves] = ways;
    }
    private boolean isBallOutside(int r, int c){
        return r<0 || c<0 || r>=rows || c>=cols;
    }
          }
