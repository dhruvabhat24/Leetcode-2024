class Solution {
    public int findMinArrowShots(int[][] points) {
        Arrays.sort(points, (a, b) -> Integer.compare(a[0], b[0]));
        int y = points[0][1];
        int ans = 1;
        for (int i = 1; i < points.length; i++) {
            if (points[i][0] > y) {
                ans++;
                y = points[i][1];
            }
            y = Math.min(points[i][1], y);
        }
        return ans;
    }
}
