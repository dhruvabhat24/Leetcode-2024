int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int bagOfTokensScore(int* tokens, int tokensSize, int power) {
    qsort(tokens, tokensSize, sizeof(int), compare);
    
    int maxScore = 0;
    int score = 0;

    int l = 0;
    int r = tokensSize - 1;

    while(l <= r) {
        if(power >= tokens[l]) {
            power -= tokens[l];
            score++;
            l++;
            maxScore = maxScore > score ? maxScore : score;
        }
        else if(score > 0) {
            power += tokens[r];
            score--;
            r--;
        }
        else
            break;
    }

    return maxScore;
}


