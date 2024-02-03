## Approach:

We start by initializing an array called dp to store our maximum sums. This array will have the same length as our input array.

We go through each element in the input array, one by one.

For each element, we consider breaking it into groups of size at most k. To do this, we use a loop that goes back from the current element to at most k elements behind it.

Within this loop, we find the maximum element in the group and calculate the sum for that group.

We keep track of the maximum sum we can get for the current element by comparing the current maximum sum with the sum of the current group.

We update the dp array with this maximum sum.

Finally, we return the maximum sum from the dp array, which will be our answer.

## Complexity:

+ Time complexity: This algorithm runs in O(n^2) time because we have two nested loops, one going through the input array and another going back at most k steps.
+ Space complexity: The space complexity is O(n) because we create an additional array of the same length as the input array to store our dynamic programming values.
