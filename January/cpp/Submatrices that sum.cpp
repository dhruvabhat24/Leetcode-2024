class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        for (int j = 1; j < cols; ++j) matrix[0][j] += matrix[0][j - 1];
        for (int i = 1; i < rows; ++i) matrix[i][0] += matrix[i - 1][0];
        for (int i = 1; i < rows; ++i) {
            for (int j = 1; j < cols; ++j) {
                matrix[i][j] = matrix[i][j] + matrix[i - 1][j] + matrix[i][j - 1] - matrix[i - 1][j - 1];
            }
        }
        int res = 0;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                for (int k = i; k < rows; ++k) {
                    for (int l = j; l < cols; ++l) {
                        //cout << "(" << i << "," << j << ")" << " - (" << k << "," << l << ")" << endl;
                        int up = 0;
                        if (i - 1 >= 0) {
                            up = matrix[i - 1][l];
                        }
                        int left = 0;
                        if (j - 1 >= 0) {
                            left = matrix[k][j - 1];
                        }
                        int ul = 0;
                        if (i - 1 >= 0 && j - 1 >= 0) {
                            ul = matrix[i - 1][j - 1];
                        }
                        int val = matrix[k][l] - up - left + ul;
                        //cout << "total:" << matrix[k][l] << " up:" << up << " left:" << left << " up-left:" << ul << endl;
                        if (val == target) res += 1;
                    }
                }
            }
        }
        return res;
    }
};
