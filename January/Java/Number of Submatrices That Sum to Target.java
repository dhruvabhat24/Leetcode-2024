class Solution {
    
    public int numSubmatrixSumTarget(int[][] matrix, int target) {
        
        for(int i=1;i<matrix[0].length;i++){
            for(int j=0;j<matrix.length;j++){
                matrix[j][i] += matrix[j][i-1];
            }
        }
        
        int result = 0;
        for(int c1=0;c1<matrix[0].length;c1++){
            for(int c2=c1;c2<matrix[0].length;c2++){
                HashMap<Integer, Integer> map = new HashMap<>();
                map.put(0,1);
                int sum = 0;
                for(int row=0;row<matrix.length;row++){
                    sum += matrix[row][c2] - (c1 > 0 ? matrix[row][c1-1] : 0);
                    result += map.getOrDefault(sum - target, 0);
                    map.put(sum, map.getOrDefault(sum, 0)+1);
                }
                
            }
        }
        return result;
    }
}
