# Contiguous Array


# Code Description

This Python code defines a class `Solution` with a method `findMaxLength` that takes a list of integers `nums` as input and returns the maximum length of a contiguous subarray with an equal number of 0s and 1s.

1. Initialize variables `zero`, `one`, and `res` to track the count of 0s, 1s, and the maximum length of the subarray, respectively.
2. Create a dictionary `diff_index` to store the difference between the counts of 1s and 0s encountered so far along with their corresponding indices.
3. Iterate through the input list `nums` using enumerate to keep track of indices.
4. Update counts `zero` and `one` based on the current element in the iteration.
5. Check if the difference between counts of 1s and 0s exists in `diff_index`. If not, add it along with the current index.
6. If the counts of 1s and 0s are equal at the current index, update `res` to the sum of counts of 1s and 0s.
7. If not equal, find the previous index where the same difference occurred and update `res` with the maximum length between the current index and the previous index.
8. Finally, return the maximum length `res`.
