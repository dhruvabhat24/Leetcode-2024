# Least Number of Unique Integers after K Removals

The given Python code defines a class `Solution` with a method `findLeastNumOfUniqueInts` that takes a list of integers `arr` and an integer `k` as input. The goal is to find the least number of unique integers remaining in the array after removing `k` elements.

## Approach:

1. Calculate the number of distinct elements in the array using `set(arr)`.
2. Create a dictionary `frequencies` to store the count of each element in the array.
3. Iterate through the array and populate the `frequencies` dictionary.
4. Sort the values of the `frequencies` dictionary in ascending order.
5. Iterate through the sorted values, decrementing the count of distinct elements and updating `k` until it becomes zero or the value in consideration becomes greater than `k`.
6. The final count of distinct elements is the answer.

## Result:
The code efficiently determines the least number of unique integers remaining in the array after removing `k` elements. The approach leverages the frequency of elements and sorts them to prioritize removal of less frequent elements first, minimizing the count of unique integers after the removal process.
