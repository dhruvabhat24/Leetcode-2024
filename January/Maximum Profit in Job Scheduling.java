class Solution {
    public int jobScheduling(int[] startTime, int[] endTime, int[] profit) {
        int len = startTime.length;
        int[][] dp = new int[len][3];
        for(int i=0; i<len; i++){
            dp[i] = new int[]{startTime[i], endTime[i], profit[i]};
        }

        Arrays.sort(dp, (a,b)->a[1]-b[1]);
        TreeMap<Integer, Integer> map = new TreeMap<>();
        map.put(0, 0);
        for(var i:dp){
            int cur = map.floorEntry(i[0]).getValue() + i[2];
            if(cur > map.lastEntry().getValue()){
                map.put(i[1], cur);
            }
        }

        return map.lastEntry().getValue();
    }
}
