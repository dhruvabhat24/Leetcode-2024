class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        sort(tokens.begin(), tokens.end());
        int s = 0;
        for(int i = 0; i<n; i++){
            if(power < tokens[i] && n >=4 && s >= 1){
                power += tokens[n-1];
                n -= 1;
                s--;
            }
            if(tokens[i] <= power){
                power -= tokens[i];
                s++;
            }
        }
        return s;
    }
};
