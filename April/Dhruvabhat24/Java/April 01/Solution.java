class Solution {
  public int lengthOfLastWord(String s) {
    int i = s.length() - 1;

    // Move pointer to the left while encountering consecutive spaces
    while (i >= 0 && s.charAt(i) == ' ')
      --i;

    // Set lastIndex to the current position of i
    final int lastIndex = i;

    // Move pointer to the left until the start of the last word
    while (i >= 0 && s.charAt(i) != ' ')
      --i;

    // Calculate the length of the last word
    return lastIndex - i;
  }
}
