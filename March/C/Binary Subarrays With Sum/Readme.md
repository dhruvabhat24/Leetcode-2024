# Approach 
<br> 1. Initialize variables: count for subarray count, sum for cumulative sum, and prefixSum array.<br> 2.
Initialize prefixSum with prefixSum[0] = 1. <br> 3.
Iterate through the array, updating sum and prefixSum. <br> 4.
If sum is greater than or equal to goal, increment count by prefixSum[sum - goal]. <br> 5.
Return the final count. <br>
