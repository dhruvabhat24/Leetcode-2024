class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int num =0;
        while(left!= right){
            left>>=1;
            right>>=1;
            num++;
        }
        return (left<<num);
    }
};
