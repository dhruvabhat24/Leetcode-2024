public class Solution {
    public int pivotInteger(int n) {
        int sum = (n * (n + 1)) / 2;
        long sumx = 0;

        for (int i = 1; i <= n; i++) {
            sumx += i;

            if (2 * sumx == sum + i) {
                return i;
            }
        }

        return -1;
    }
}
