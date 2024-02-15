class Solution {
    public long largestPerimeter(int[] nums) {
       long sum = 0;
       List<Integer> numsList = new ArrayList<>(nums.length);
       for(int i = 0; i < nums.length; i++) {
           sum += nums[i];
           numsList.add(-nums[i]); //java doesn't natively support O(N) heapify with custom compartor, so make it effectively a maxHeap by making an all negative minHeap
       }
       PriorityQueue<Integer> maxHeap = new PriorityQueue<>(numsList);
        long curr = sum;
       while(!maxHeap.isEmpty() && curr <= -maxHeap.peek() * 2) {
           curr += maxHeap.poll();
       }
       return maxHeap.size() >= 2 ? curr : -1;
    }

   
}
