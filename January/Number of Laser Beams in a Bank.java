class Solution {
    public int numberOfBeams(String[] bank) {
        int prevCount = 0,n = bank.length,ans = 0;
        for(int i=0; i<bank[0].length(); i++){
            if(bank[0].charAt(i) == '1') prevCount++;
        }
        for(int i=1; i<n; i++){
            String str = bank[i];
            int curCount = 0,onesCount = 0;boolean f = false;
            for(int j=0; j<str.length(); j++){
                if(str.charAt(j) == '1'){
                    curCount += prevCount;
                    onesCount++;
                    f = true;
                }
            }
            if(f) prevCount = onesCount;
            ans += curCount;
        }
        return ans;
    }
}
