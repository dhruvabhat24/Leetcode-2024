class Solution {
    public boolean exist(char[][] board, String word) {
        boolean[][] board2 = new boolean[board.length][board[0].length];
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[i].length; j++) {
                if(board[i][j]==word.charAt(0)){
                    if(wordSearch(board,i,j,word.substring(1),board2)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
     static boolean wordSearch(char[][] board , int i , int j , String word , boolean[][] board2){
        if(word.isEmpty()){
            return true;
        }

        if(board2[i][j]==true){
            return false;
        }
        board2[i][j] = true;

        boolean ans1 = false;
        boolean ans2 = false;
        boolean ans3 = false;
        boolean ans4 = false;

//        for top traversal
            if(i>0){
                if(board[i-1][j]==word.charAt(0) && board2[i-1][j]!=true){
                    ans1 = wordSearch(board,i-1,j,word.substring(1),board2);
                }
            }

//        for bottom traversal
            if(i<board.length-1){
                if(board[i+1][j]==word.charAt(0) && board2[i+1][j]!=true){
                    ans2 = wordSearch(board,i+1,j,word.substring(1),board2);
                }
            }

//            for left traversal
            if(j>0){
                if(board[i][j-1]==word.charAt(0) && board2[i][j-1]!=true){
                    ans3 = wordSearch(board,i,j-1,word.substring(1),board2);
                }
            }

//            for right traversal
            if(j<board[i].length-1){
                if(board[i][j+1]==word.charAt(0) && board2[i][j+1]!=true){
                    ans4 = wordSearch(board,i,j+1,word.substring(1),board2);
                }
            }
        board2[i][j] = false;
        if(ans1 || ans2 || ans3 ||ans4){
            return true;
        }
        return false;
    }
}
