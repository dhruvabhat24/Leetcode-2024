/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
     int *result = (int *)malloc(numsSize * sizeof(int));
    int *left = (int *)malloc(numsSize * sizeof(int));
    int *right = (int *)malloc(numsSize * sizeof(int));
    
    left[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        left[i] = left[i - 1] * nums[i - 1];
    }

    right[numsSize - 1] = 1;
    for (int i = numsSize - 2; i >= 0; i--) {
        right[i] = right[i + 1] * nums[i + 1];
    }

    for (int i = 0; i < numsSize; i++) {
        result[i] = left[i] * right[i];
    }

    *returnSize = numsSize;
    free(left);
    free(right);
    return result;
}
