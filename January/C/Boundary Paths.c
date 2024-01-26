void dfs(int m, int n, int max, int x, int y, int k, long int* cnt, long int*** cache) {
    if (x >= m || x < 0 || y >= n || y < 0) {
        (*cnt)++;
        (*cnt) %= 1000000007;
        return;
    }
    if (cache[x][y][k] != -1) {
        (*cnt) = cache[x][y][k];
        return;
    }
    if (k == max) return;
    long int a = 0, b = 0, c = 0, d = 0;
    dfs(m, n, max, x+1, y, k+1, &a, cache);
    dfs(m, n, max, x-1, y, k+1, &b, cache);
    dfs(m, n, max, x, y+1, k+1, &c, cache);
    dfs(m, n, max, x, y-1, k+1, &d, cache);
    cache[x][y][k] = a + b + c + d;
    cache[x][y][k] %= 1000000007;
    (*cnt) = cache[x][y][k];
}

int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
    if (maxMove == 0) return 0;
    long int*** cache = (long int***) malloc(m * sizeof(long int**));
    for (int i = 0; i < m; i++) {
        cache[i] = (long int**) malloc(n * sizeof(long int*));
        for (int j = 0; j < n; j++) {
            cache[i][j] = (long int*) malloc((maxMove+1) * sizeof(long int));
            memset(cache[i][j], -1, (maxMove+1) * sizeof(long int));
        }
    }
    long int cnt = 0;
    dfs(m, n, maxMove, startRow, startColumn, 0, &cnt, cache);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            free(cache[i][j]);
        }
        free(cache[i]);
    }
    free(cache);
    return cnt;
}
