class Solution {
   public boolean closeStrings(String word1, String word2) {
		int len1, len2;
		
		if ((len1 = word1.length()) != (len2 = word2.length()))
			return false;
		byte[] by1 = word1.getBytes(), by2 = word2.getBytes();
		int[] ch1 = new int[26], ch2 = new int[26];

		shams(by1, ch1, len1);
		shams(by2, ch2, len2);

		for (int i = 0; i < 26; i++) 
			if (ch1[i] > 0 ^ ch2[i] > 0)
				return false;
		Arrays.sort(ch1);
		Arrays.sort(ch2);
		return Arrays.equals(ch1, ch2);
	}
	void shams(byte[] b, int[] i, int l) {
		while (l-- > 0)
			i[b[l] - 97]++;
	}
}
