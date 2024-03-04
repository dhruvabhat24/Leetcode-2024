class Solution {
   public int bagOfTokensScore(int[] tokens, int power) {
	Arrays.sort(tokens);

	int left = 0, right = tokens.length - 1;
	int score = 0, maxScore = 0;

	while(left <= right) {
		if(tokens[left] <= power) {
			power -= tokens[left++];
			score++;
			maxScore = Math.max(maxScore, score);
		} else if(score > 0) {
			power += tokens[right--];
			score--;
		} else {
			break;
		}
	}

	return maxScore;
}
}
