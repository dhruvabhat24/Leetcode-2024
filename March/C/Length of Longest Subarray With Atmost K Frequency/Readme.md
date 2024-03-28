1. Initialize Variables:

* Initialize i, j, and ans to 0. i and j represent the left and right pointers of the sliding window respectively, and ans holds the maximum length of the subarray found so far.
* Initialize max_num to 0, which will be used to determine the size of the auxiliary array mp.
* Allocate memory for the auxiliary array mp using calloc, where max_num + 1 represents the number of possible distinct values in the nums array. Check if memory allocation is successful.

2. Counting the Maximum Number:
* Iterate through the nums array to find the maximum value (max_num). This is done to determine the size of the auxiliary array mp.

3.Allocate Memory for mp:
* Dynamically allocate memory for the auxiliary array mp of size max_num + 1 to store the frequency of each number encountered in the array nums.

4. Sliding Window Technique:

* Start a while loop that continues until j reaches the end of the array (numsSize).
* Inside the loop, increment the frequency of nums[j] in mp.
* If the frequency of nums[j] becomes greater than k, it means we have more than k distinct elements in the current window. In this case, we need to shrink the window from the left (i) until we have at most k distinct elements.
* Update ans to store the maximum length of the subarray found so far.
* Increment j to expand the window.

5. Free Memory:

* After the loop terminates, free the memory allocated for the auxiliary array mp.
* Return the Maximum Length:

6. Return the value stored in ans, which represents the maximum length of the contiguous subarray with at most k distinct elements.
