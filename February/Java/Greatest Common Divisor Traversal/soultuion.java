public class Solution {
    public boolean canTraverseAllPairs(int[] nums) {
        int maxNum = Arrays.stream(nums).max().getAsInt();
        UnionFind uf = new UnionFind(nums.length);
        Map<Integer, Integer> primeToIndex = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];

            for (int factor = 2; factor * factor <= num; factor++) {
                if (num % factor == 0) {
                    handlePrimeFactor(factor, i, uf, primeToIndex);

                    while (num % factor == 0) {
                        num /= factor;
                    }
                }
            }

            if (num > 1) {
                handlePrimeFactor(num, i, uf, primeToIndex);
            }
        }

        return isAllConnected(uf, nums.length);
    }

    private void handlePrimeFactor(int factor, int index, UnionFind uf, Map<Integer, Integer> primeToIndex) {
        if (!primeToIndex.containsKey(factor)) {
            primeToIndex.put(factor, index);
        } else {
            uf.union(index, primeToIndex.get(factor));
        }
    }

    private boolean isAllConnected(UnionFind uf, int length) {
        for (int i = 1; i < length; i++) {
            if (!uf.isConnected(i, 0)) {
                return false;
            }
        }
        return true;
    }
}

class UnionFind {
    public int[] group;

    public UnionFind(int n) {
        group = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            group[i] = i;
        }
    }

    private int find(int x) {
        return group[x] == x ? x : (group[x] = find(group[x]));
    }

    public void union(int i, int j) {
        int x = find(i);
        int y = find(j);

        if (x == y) {
            return;
        }

        group[x] = y;
    }

    public boolean isConnected(int i, int j) {
        return find(i) == find(j);
    }
}
