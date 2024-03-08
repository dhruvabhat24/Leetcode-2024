class Solution {
    public int maxFrequencyElements(int[] nums) {
        int count = 0;
        Map<Integer, Integer> frequencyMap = new HashMap<>();
        int maxFreq = 0;

        for (int num : nums) {
            frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1);
            maxFreq = Math.max(maxFreq, frequencyMap.get(num));
        }
        for (int freq : frequencyMap.values()) {
            if (freq == maxFreq)    count += freq;
        }
        return count;
    }
}
