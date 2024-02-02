int* sequentialDigits(int low, int high, int* returnSize) {
    int nums[8] = {1,2,3,4,5,6,7,8};

    int* result = malloc(36 * sizeof(result[0]));

    *returnSize = 0;

    for (int i = 8; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            const int num = nums[j]*10 + nums[j]%10 + 1;

            if (low <= num && num <= high) {
                result[(*returnSize)++] = num;
            }

            nums[j] = num;
        }
    }

    return realloc(result, *returnSize * sizeof(result[0]));
}
