func numIslands(grid [][]byte) int {
    if len(grid) == 0{
        return 0
    }
    island:=0
    for i:=0;i<len(grid);i++{
        for j:=0;j<len(grid[0]);j++{
            if (grid[i][j]=='1'){
                island++
                dfs(grid,i,j)
            }
        }
    }
    return island
}


func dfs(grid [][]byte, i int, j int){
    if (i<0 || i>=len(grid) || j<0 || j>=len(grid[0]) || grid[i][j]=='0'){
        return;
    }
    grid[i][j]='0';
    dfs(grid,i+1,j);
    dfs(grid,i-1,j);
    dfs(grid,i,j-1);
    dfs(grid,i,j+1);
}
