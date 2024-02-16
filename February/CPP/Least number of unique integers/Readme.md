# Find Least Number of Unique Integers after K Removals

## Class: Solution

This class contains a method to find the least number of unique integers remaining after removing `k` elements from an array.

### Method: `findLeastNumOfUniqueInts`

Finds the least number of unique integers remaining after removing `k` elements from the array.

#### Parameters

- `arr`: A vector of integers representing the input array.
- `k`: An integer representing the number of elements to remove from the array.

#### Returns

An integer representing the least number of unique integers remaining after removing `k` elements from the array.

### Approach

The `findLeastNumOfUniqueInts` method finds the least number of unique integers remaining after removing `k` elements from the array.

1. **Counting Occurrences:**
   - Initialize an unordered map `countMap` to store the count of occurrences of each integer in the array.
   - Iterate through the array `arr` and update the count of each integer in `countMap`.

2. **Sorting Counts:**
   - Initialize a vector of pairs `counts` to store the counts of integers and their occurrences.
   - Iterate through `countMap` and push each pair (integer, count) into `counts`.
   - Sort `counts` based on the occurrences of integers in non-decreasing order using a custom comparator function.

3. **Removing Elements:**
   - Initialize a variable `uniqueCount` to store the count of unique integers initially set to the size of `counts`.
   - Iterate through `counts`:
      - If the remaining removals `k` is greater than or equal to the count of occurrences of the current integer `pair.second`:
         - Decrement `k` by `pair.second`.
         - Decrement `uniqueCount` as the current integer is removed entirely.
      - Otherwise, break the loop as further removals are not possible.

4. **Result:**
   - After the loop completes, return `uniqueCount`, which represents the least number of unique integers remaining after removing `k` elements from the array.

The approach efficiently finds the least number of unique integers remaining after removing `k` elements from the array by counting occurrences, sorting the counts, and iteratively removing elements based on the remaining removals.
