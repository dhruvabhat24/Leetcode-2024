#define MOD ( (int)1e9 + 7 )

int sumSubarrayMins(const int * const arr, const int arrLen){
	int stack[arrLen], stackLen = 0;
	int idxs[arrLen][2];
	for (int i = 0; i < arrLen; i += 1){
		while (stackLen > 0 && arr[stack[stackLen - 1]] >= arr[i]){
			//right first smaller or equal
			idxs[stack[stackLen - 1]][1] = i;

			stackLen -= 1;
		}

		//left first smaller
		idxs[i][0] = (stackLen > 0)? stack[stackLen - 1] : -1;

		stack[stackLen] = i;
		stackLen += 1;
	}
	for (; stackLen > 0; stackLen -= 1){
		idxs[stack[stackLen - 1]][1] = arrLen;
	}

	int cnt = 0;
	for (int i = 0; i < arrLen; i += 1){
		cnt = (cnt + arr[i] * (int64_t)(i - idxs[i][0]) * (idxs[i][1] - i)) % MOD;
	}
	return cnt;
}
