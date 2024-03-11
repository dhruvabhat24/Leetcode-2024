/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    int resultIdx = 0;
    
    int* mp = (int*)calloc(1001, sizeof(int));
    
    for (int i = 0; i < nums1Size; i++) {
        mp[nums1[i]] = 1;
    }
    
    for (int i = 0; i < nums2Size; i++) {
        if (mp[nums2[i]]) {
            result[resultIdx++] = nums2[i];
            mp[nums2[i]] = 0;
        }
    }
    
    *returnSize = resultIdx;
    
    free(mp);
    return result;
}

