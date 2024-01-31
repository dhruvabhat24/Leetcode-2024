int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize) {
    int* ret = (int*) calloc(temperaturesSize, sizeof(int));

    for (int i = temperaturesSize - 1; 0 <= i; --i) {
        for (int j = i + 1; j < temperaturesSize;) {
            if (temperatures[i] < temperatures[j]) {
                ret[i] = j - i;
                break;
            } else if (!ret[j]) {
                break;
            } else {
                j += ret[j];
            }
        }
    }
    *returnSize = temperaturesSize;
    return ret;
}


