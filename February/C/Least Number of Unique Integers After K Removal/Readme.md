# Intuition
The intuition behind this approach is to use a frequency map to count the occurrences of each integer in the given array. By sorting the frequencies and iteratively removing integers with the lowest frequencies until k becomes zero, we aim to minimize the number of unique integers left in the array.

## Complexity
### Time complexity: O(n log n) - Sorting the list of frequencies takes O(n log n) time.
### Space complexity: O(n)
