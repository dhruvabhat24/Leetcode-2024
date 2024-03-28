int maxSubarrayLength(int* nums, int numsSize, int k) {
     int i = 0, j = 0, ans = 0;
    int max_num = 0; // Variable to store the maximum number in nums
    for (int idx = 0; idx < numsSize; idx++) {
        if (nums[idx] > max_num) {
            max_num = nums[idx];
        }
    }
    int* mp = (int*)calloc(max_num + 1, sizeof(int)); // Dynamically allocate memory for mp
    if (mp == NULL) {
        return -1; // Memory allocation failed
    }
    while (j < numsSize) {
        mp[nums[j]]++;
        while (mp[nums[j]] > k) {
            mp[nums[i++]]--;
        }
        ans = ans > (j - i + 1) ? ans : (j - i + 1);
        j++;
    }
    free(mp); // Free dynamically allocated memory
    return ans;
}

