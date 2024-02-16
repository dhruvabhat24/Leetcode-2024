int cmp(const void* a, const void* b) {
    return *(const int*) a > *(const int*) b;
}

int findLeastNumOfUniqueInts(int* arr, int arrSize, int k) {
    qsort(arr, arrSize, sizeof(int), cmp);
    int idx = 0, cnt = 0, ans = 0;
    int* tmp = (int*) malloc(arrSize * sizeof(int));
    for (int i = 0; i < arrSize; i++) {
        int j = i;
        while (j < arrSize && arr[j] == arr[i]) {
            cnt++;
            j++;
        }
        tmp[idx++] = cnt;
        i = j - 1;
        cnt = 0;
    }
    qsort(tmp, idx, sizeof(int), cmp);
    for (int i = 0; i < idx; i++) {
        ans += tmp[i];
        if (ans >= k) {
            ans = (ans == k) ? (idx - i - 1) : (idx - i);
            break;
        }
    }
    free(tmp);
    return ans;
}
