# Missing Number

The given Python code defines a class `Solution` with a method `missingNumber` that takes a list of integers `nums` as input and returns the missing number in the range from 0 to `N` (inclusive), where `N` is the length of the array.

## Approach:

1. Use the `Counter` class from the `collections` module to count the occurrences of each element in the array.
2. Get the length of the array and store it in variable `N`.
3. Iterate through the range from 0 to `N` (inclusive).
   - Check if the current number `i` is not present in the counter `c`.
   - If not present, return the missing number `i`.
4. If no missing number is found, the function returns -1.

## Result:
The code efficiently identifies the missing number in the given array by leveraging the `Counter` class to count occurrences and iterating through the range of possible values. The approach ensures a straightforward solution to finding the missing element in the specified range.
