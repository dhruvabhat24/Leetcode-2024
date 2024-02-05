class Solution {
    public int firstUniqChar(String s) {
        for (int i = 0; i < s.length(); i++) {
            int c = s.charAt(i);
            if (i == s.lastIndexOf(c) && i == s.indexOf(c)) return i;
        }

        return -1;

    }
}
