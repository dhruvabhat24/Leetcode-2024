class Solution {
    public int[][] insert(int[][] intervals, int[] newInterval) {
        List<int[]> intervalList = new ArrayList<>();
        for (int[] interval : intervals) {
            intervalList.add(interval);
        }
        intervalList.add(newInterval);
        
        intervalList.sort((a, b) -> Integer.compare(a[1], b[1]));
        
        List<int[]> res = new ArrayList<>();
        res.add(intervalList.get(0));
        
        for (int i = 1; i < intervalList.size(); i++) {
            int currEnd = intervalList.get(i)[1];
            int currStart = intervalList.get(i)[0];
            while (res.size() > 0 && res.get(res.size() - 1)[1] >= currStart) {
                currEnd = Math.max(res.get(res.size() - 1)[1], currEnd);
                currStart = Math.min(res.get(res.size() - 1)[0], currStart);
                res.remove(res.size() - 1);
            }
            res.add(new int[]{currStart, currEnd});
        }
        
        return res.toArray(new int[res.size()][]);
    }
}
