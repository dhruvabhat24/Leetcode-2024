char* firstPalindrome(char** words, int wordsSize) {
    for(int i = 0; i < wordsSize; i++) {
        int len = strlen(words[i]);
        int start = 0;
        int end = len - 1;
       while (start < end) {
            if (words[i][start] != words[i][end]) {
                break;
            }
            start++;
            end--;
        }
        
        if (start >= end) {
            return words[i];
        }
    }
    return "";
}
