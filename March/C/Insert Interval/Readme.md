# Intuition
To solve this problem, we can iterate through the given intervals and compare them with the newInterval to determine their relationship. We need to consider three cases:

The current interval ends before the newInterval starts.
The current interval overlaps with the newInterval.
The current interval starts after the newInterval ends.
# Approach
<br> 1. We initialize an empty list result to store the merged intervals. <br> 2.  We iterate through the given intervals, adding non-overlapping intervals before the newInterval to result. <br> 3. Then, we merge overlapping intervals with the newInterval. After that, we add the merged newInterval to result. <br> 4.Finally, we add the remaining non-overlapping intervals after the newInterval to result. We return result as the final result.
