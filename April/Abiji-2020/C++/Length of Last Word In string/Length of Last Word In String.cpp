class Solution {
public:
    int lengthOfLastWord(string s) {
        int result =0;
        int prev =0;
        for(int i=0;s[i]!='\0';i++){
            if (s[i] == ' '){
                result = 0;
                continue;
            } else {
                result++;
            }
            prev = result;
        }
        return result==0? prev: result;
        
    }
};
