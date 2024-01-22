int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int missing, repeat;
    int* arr = (int*)malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize; i++) {
        if (nums[abs(nums[i]) - 1] < 0)
            repeat = abs(nums[i]);
        else
            nums[abs(nums[i]) - 1] *= -1;
    }

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0)
            missing = i + 1;
    }
    *returnSize = 2;
    arr[0] = repeat;
    arr[1] = missing;
    return arr;
}

