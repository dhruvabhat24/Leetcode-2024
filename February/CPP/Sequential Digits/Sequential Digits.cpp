class Solution {
    void helper(int curr, int low, int high, int cd, int hd){
        if(cd> hd || curr> high)
            return;
        if (curr <= high && curr>= low){
            ans.insert(curr);
        }
        int last = curr%10;
        if( last == 9)
            return;
        curr = curr *10 +(last+1);
        helper(curr,low,high,cd+1,hd);
    }

public:
    set<int> ans;
    vector<int> sequentialDigits(int low, int high) {
        vector<int> resl;
       int dl =0, dh =0, n=low, m=high;
       while(n>0){
           n/=10;
           dl++;
       }
       while(m>0){
           m/=10;
           dh++;
       }
       for(int i =0;i<9;i++)
        helper(i,low,high,0,dh);
       // sort(ans.begin(),ans.end());
       // return ans;
       for(int x: ans){
           resl.push_back(x);
       }
        return resl;
    }
};
