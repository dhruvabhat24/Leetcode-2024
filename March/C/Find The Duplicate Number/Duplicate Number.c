int findDuplicate(int* nums, int numsSize) {
    int compare(const void* a, const void* b) {
        return (*(int*)a - *(int*)b);
    }
    qsort(nums, numsSize, sizeof(int), compare);
    int i;
    for (i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return nums[i];
        }
    }
    return -1;

}

