int* factorsCalculator(int n) {
    int* dp = (int*)malloc((n + 2) * sizeof(int));
    for (int i = 0; i <= n + 1; i++) {
        dp[i] = i;
    }
    for (int i = 2; i <= n; i++) {
        if (dp[i] == i) {
            for (int j = i * 2; j <= n; j += i) {
                if (dp[j] == j) dp[j] = i;
            }
        }
    }
    return dp;
}

int find(int* parent, int a) {
    while (parent[a] != a) {
        a = parent[a];
    }
    return a;
}

void unionFunc(int* parent, int* rank, int a, int b) {
    a = find(parent, a);
    b = find(parent, b);
    if (a == b) return;
    if (rank[a] < rank[b]) {
        int temp = a;
        a = b;
        b = temp;
    }
    parent[b] = a;
    rank[a] += rank[b];
}

bool canTraverseAllPairs(int* nums, int numsSize) {
    if (numsSize == 1) return true;
    int maxElement = nums[0];
    int minElement = nums[0];
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > maxElement) {
            maxElement = nums[i];
        }
        if (nums[i] < minElement) {
            minElement = nums[i];
        }
    }
    if (minElement == 1) return false;
    int* factorArray = factorsCalculator(maxElement);
    int* parent = (int*)malloc((maxElement + 1) * sizeof(int));
    int* rank = (int*)malloc((maxElement + 1) * sizeof(int));
    for (int i = 0; i <= maxElement; i++) {
        parent[i] = i;
        rank[i] = 1;
    }
    for (int i = 0; i < numsSize; i++) {
        int x = nums[i];
        while (x > 1) {
            int p = factorArray[x];
            unionFunc(parent, rank, p, nums[i]);
            while (x % p == 0) {
                x = x / p;
            }
        }
    }
    int p = find(parent, nums[0]);
    for (int i = 1; i < numsSize; i++) {
        if (find(parent, nums[i]) != p) return false;
    }
    return true;
}
