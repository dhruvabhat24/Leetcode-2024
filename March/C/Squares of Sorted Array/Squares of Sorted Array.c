/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int cmp (const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}


int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    for (int i=0; i<numsSize; i++) {
        nums[i] = nums[i]*nums[i];
    }
    
    qsort (nums, numsSize, sizeof(int), cmp);
    
    return nums;
}

