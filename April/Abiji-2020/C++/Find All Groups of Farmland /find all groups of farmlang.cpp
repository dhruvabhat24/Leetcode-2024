class Solution {
public:

    void dfs(vector<vector<int>>&land, int i, int j , int &gx, int &gy){
        int n=land.size(),m=land[0].size();
        if(i>=0 && j>=0 && i<n && j<m && land[i][j]==1){
            land[i][j]=0;
            gx=max(gx,i),gy=max(gy,j);
            dfs(land,i+1,j,gx,gy);
            dfs(land,i-1,j,gx,gy);
            dfs(land,i,j+1,gx,gy);
            dfs(land,i,j-1,gx,gy);
        }
    }
    
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n= land.size();
        int m= land[0].size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(land[i][j]==1){
                    int lx=i,ly=j,gx=i,gy=j;
                    dfs(land,i,j,gx,gy);
                    ans.push_back({lx,ly,gx,gy});
                }
            }
        }
        return ans;
    }
};
