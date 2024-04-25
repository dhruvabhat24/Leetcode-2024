class Solution {
public:
    int longestIdealString(string s, int k) {
        int dp[27] = {0};
        int n = s.length();
        for(int i=n-1;i>=0;i--){
            char idx = s[i]-'a';
            int maxi=INT_MIN;
            int left = max((idx-k),0);
            int right = min((idx+k),26);
            for(int j=left;j<=right;j++){
                maxi = max(maxi,dp[j]);
            }
            dp[idx] = maxi+1;
        }
        int max = INT_MIN;
        for(int va:dp){
            if(va>max) max = va;
        }
        return max;
    }
};
