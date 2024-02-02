class Solution {
    public List<Integer> sequentialDigits(int low, int high) {
        int start = 1, cur = 1, inc = 11, t = 8;
        List<Integer> ans = new ArrayList<>();
        while(cur <= high){
            for (int i = 0; i < t; i++){
                cur += inc;
                if (cur >= low && cur <= high) ans.add(cur);
            }
            inc = 10 * inc + 1;
            start = 10 * start + 10 - t;
            cur = start;
            t--;
        }
        return ans;
    }
}
