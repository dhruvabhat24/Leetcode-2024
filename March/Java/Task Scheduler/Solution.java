class Solution {
    public int leastInterval(char[] tasks, int n) {
        int[] frequencies = new int[26];
        for (char task : tasks) {
            frequencies[task - 'A']++;
        }
        Arrays.sort(frequencies);
        int maxFrequency = frequencies[25] - 1;
        int idleSlots = maxFrequency * n;
        
        for (int i = 24; i >= 0 && frequencies[i] > 0; i--) {
            idleSlots -= Math.min(frequencies[i], maxFrequency);
        }
        
        return idleSlots > 0 ? idleSlots + tasks.length : tasks.length;
    }
}
