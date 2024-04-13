class Solution {
public:
    int n, m;
    int check(int i, int j, int i1, int j1, vector<vector<int>>& pf){
        int l = j1, r = m, ans=0;
        while (l<=r){
            int m = (l+r)/2;

            int s = pf[i1][m] + pf[i-1][j-1] - pf[i-1][m] - pf[i1][j-1];
            int s1 = (i1-i+1)*(m-j+1);

            if (s == s1){
                ans = s;
                l = m+1;
            } else r = m-1;
        }

        return ans;
    }

    int maximalRectangle(vector<vector<char>>& vec) {
        n = vec.size(); m = vec[0].size();

        vector<vector<int>> pf(n+1, vector<int>(m+1, 0));
        for (int i=1; i<=n; i++){
            for (int j=1; j<=m; j++){
                pf[i][j] += pf[i][j-1] + (vec[i-1][j-1]=='1');
            }
            for (int j=1; j<=m; j++){
                pf[i][j] += pf[i-1][j];
            }
        }

        int ans=0;
        for (int i=1; i<=n; i++){
            for (int j=1; j<=m; j++){
                // brute force rows
                for (int k=i; k<=n; k++){
                    if (vec[k-1][j-1] != '1') break;

                    // binary search column
                    ans = max(ans, check(i, j, k, j, pf));
                }
            }
        }

        return ans;
    }
};
