int numSubarraysWithSum(int* nums, int numsSize, int goal){
int count = 0;
    int sum = 0;
    int prefixSum[numsSize + 1];
    memset(prefixSum, 0, sizeof(prefixSum));
    prefixSum[0] = 1;

    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
        if (sum >= goal) {
            count += prefixSum[sum - goal];
        }
        prefixSum[sum]++;
    }

    return count;
}
