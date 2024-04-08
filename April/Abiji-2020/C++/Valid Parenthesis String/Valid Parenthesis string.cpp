class Solution {
public:
    bool checkValidString(string s) {
        int left =0, right =0;
        for(char c: s){
            left += c=='('? 1:-1;
            right += c==')'? -1:1;
            if (right<0){
                break;
            }
            left = max(left,0);
        }
        return left ==0;
        
    }
};
