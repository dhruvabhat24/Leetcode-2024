//#include<stdio.h>
//#include<string.h>



int maxLength(char** arr, int size) {
    int charset[16] = {}; // convert string array into bitmask array
    for (int i = 0; i < size; i++) {
        char* str = arr[i];
        for (int j = 0; j < strlen(str); j++) {
            int bit = 1 << (str[j] - 'a');
            if (charset[i] & bit) {  // if current string contains duplicates
                charset[i] = 0;
                break;
            }

            charset[i] |= bit;
        }
    }

    int ans = 0, seq_size = 1, seq[65536] = {}; // we can have at most 2^16 subsequences, start with an empty one
    for (int i = 0; i < size; i++) {
        for (int j = seq_size - 1; j >= 0; j--) { 
            if (seq[j] & charset[i]) continue; // concatenation resulted a duplicate character
            int str = seq[j] | charset[i], len = 0;
            seq[seq_size++] = str;

            while (str) {
                if (str & 1) len++;
                str >>= 1;
            }
            if (ans < len) ans = len;
        }
    }

    return ans;
}
