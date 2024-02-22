int findJudge(int n, int** trust, int trustSize, int* trustColSize) {
    int in_degree[n + 1], out_degree[n + 1];
    for (int i = 0; i < n + 1; i++) {
        in_degree[i] = 0; out_degree[i] = 0;
    }

    for (int i = 0; i < trustSize; i++) {
        out_degree[trust[i][0]]++;
        in_degree[trust[i][1]]++;
    }
    
    for (int i = 1; i <= n; i++) {
        if (in_degree[i] == n - 1 && out_degree[i] == 0) return i;
    }
    return -1;
}


