class Solution {
public:
    int tribonacci(int n) {
        int a=0,b=1,c=1;
        int t;
        if (n<2) return n;
        while(n>2){
            t=a+b+c;
            a = b;
            b = c;
            c = t;
            n--;
        }
        return c;
    }
};
