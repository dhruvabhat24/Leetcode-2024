# Approach

## Initialization:

* count: This variable stores the final count of subarrays with at most k distinct integers.
* left1 and left2: These variables are pointers that keep track of the leftmost elements of two windows.
* freq1 and freq2: These are frequency arrays that store the frequency of each element in the two windows respectively.
*distinct1 and distinct2: These variables store the number of distinct elements in each window respectively.

## Iterating through the array:

* The code iterates through the nums array using a for loop. For each element nums[right]:
* The frequency of the element in both windows is incremented using freq1 and freq2.
* If the element is not seen before in the first window (freq1[nums[right]] == 0), distinct1 is incremented to indicate a new distinct element in the first window.
* Similarly, distinct2 is incremented if the element is new in the second window.

## Shrinking the first window:

* The code maintains a window (left1 to right) where the number of distinct elements is at most k. If distinct1 becomes greater than k, it shrinks the window from the left side by:
Decrementing the frequency of the leftmost element nums[left1] in freq1.
* If the frequency of the element becomes zero (freq1[nums[left1]] == 0), it decrements distinct1 as well, since the element is no longer distinct in the window.
* Incrementing left1 to move the window one element to the right.

## Shrinking the second window:

* The code also maintains another window (left2 to right) where the number of distinct elements is at most k-1. This window is used to efficiently calculate the number of valid subarrays. Similar to the first window, it shrinks this window from the left side if distinct2 becomes greater than k-1.
Counting subarrays:

* After processing each element nums[right], the code calculates the number of valid subarrays ending at right. This is simply the difference between the right pointers of the two windows (left2 - left1). The rationale behind this is that any subarray ending at right that is contained within the second window (left2 to right) must also be contained within the first window (left1 to right), and hence is not valid (because it has more than k distinct elements). Therefore, only the subarrays ending at right that are outside the second window are valid.
Returning the count:

* After iterating through the entire array, the function returns the final count of valid subarrays stored in count.

