class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int islands =0;
        int neighbour =0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    islands++;
                    if(i-1>=0 && grid[i-1][j]==1 ){
                        neighbour++;
                    }
                    if(j-1>=0 && grid[i][j-1]==1){
                        neighbour++;
                    }
                }
            }
        }
        return islands*4 -neighbour*2;
    }
};
