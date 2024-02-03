static inline int max(const int a, const int b) {
    return a > b ? a : b;
}

int maxSumAfterPartitioning(int* arr, int arrSize, int k) {
    const int n = arrSize;
    const int m = k+1;

    int dp[m];
    int maxnum, maxsum;

    dp[0] = arr[0];
    
    for (int i = 1; i < n; i++) {
        maxnum = 0;
        maxsum = 0;
        
        for (int j = i; j >= i-k+1 && j >= 0; j--) {
            maxnum = max(maxnum, arr[j]);
            maxsum = max(maxsum, maxnum * (i-j+1) + (j > 0 ? dp[(j-1) % m] : 0));
        }

        dp[i % m] = maxsum;
    }

    return dp[(n-1) % m];
}
