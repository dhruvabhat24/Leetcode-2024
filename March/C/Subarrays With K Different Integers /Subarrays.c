int count = 0;
    int left1 = 0, left2 = 0;
    int freq1[20001] = {0};
    int freq2[20001] = {0};
    int distinct1 = 0, distinct2 = 0;

    for (int right = 0; right < numsSize; right++) {
        if (freq1[nums[right]] == 0) {
            distinct1++;
        }
        freq1[nums[right]]++;

        if (freq2[nums[right]] == 0) {
            distinct2++;
        }
        freq2[nums[right]]++;

        while (distinct1 > k) {
            freq1[nums[left1]]--;
            if (freq1[nums[left1]] == 0) {
                distinct1--;
            }
            left1++;
        }

        while (distinct2 > k - 1) {
            freq2[nums[left2]]--;
            if (freq2[nums[left2]] == 0) {
                distinct2--;
            }
            left2++;
        }

        count += left2 - left1;
    }

    return count;

