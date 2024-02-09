#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int* largestDivisibleSubset(int* nums, int numsSize, int* returnSize) {
    if (numsSize == 0) {
        *returnSize = 0;
        return NULL;
    }
    if (numsSize == 1) {
        int* result = (int*)malloc(sizeof(int));
        result[0] = nums[0];
        *returnSize = 1;
        return result;
    }
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    int* dp = (int*)malloc(numsSize * sizeof(int));
    int* prevIndex = (int*)malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        dp[i] = 1;
        prevIndex[i] = -1;
    }
    int maxSubsetSize = 0;
    int maxSubsetEndIndex = -1;
    for (int i = 1; i < numsSize; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
                prevIndex[i] = j;
            }
        }
        if (dp[i] > maxSubsetSize) {
            maxSubsetSize = dp[i];
            maxSubsetEndIndex = i;
        }
    }
    int* result = (int*)malloc(maxSubsetSize * sizeof(int));
    int index = maxSubsetSize - 1;
    int currentIndex = maxSubsetEndIndex;
    while (currentIndex != -1) {
        result[index--] = nums[currentIndex];
        currentIndex = prevIndex[currentIndex];
    }
    free(dp);
    free(prevIndex);
    *returnSize = maxSubsetSize;
    return result;
}

