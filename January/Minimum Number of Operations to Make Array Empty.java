class Solution {
  public int minOperations(int[] nums) {
    var map = new HashMap<Integer, Integer>();
    var cnt = 0;

    for (var n : nums)
      map.put(n, map.getOrDefault(n, 0) + 1);

    for (var val : map.values()) {
      if (val == 1) return -1;
      
      cnt += val / 3;
      if (val % 3 != 0) cnt++;
    }
    return cnt;
  }
}
