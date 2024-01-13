class Solution {
  public int minSteps(String s, String t) {
    var map1 = new int[26];
    var map2 = new int[26];
    var cnt = 0;

    for (var c : s.toCharArray()) map1[c - 'a']++;
    for (var c : t.toCharArray()) map2[c - 'a']++;

    for (var i=0; i<26; i++)
      if (map2[i] > map1[i])
        cnt += map2[i] - map1[i];
    
    return cnt;
  }
}
