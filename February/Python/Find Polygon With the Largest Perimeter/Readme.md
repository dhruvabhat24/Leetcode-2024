# Largest Perimeter Triangle

The given Python code defines a class `Solution` with a method `largestPerimeter` that takes a list of integers `nums` as input and returns the largest perimeter of a triangle that can be formed using three elements from the array.

## Approach:

1. Sort the input array `nums` in non-decreasing order.
2. Iterate through the sorted array in reverse order.
   - For each element at index `i`, try to form a triangle using the three consecutive elements with indices `i-2`, `i-1`, and `i`. These are the largest elements since the array is sorted.
   - Check if the sum of the two smaller sides is greater than the largest side. If yes, return the sum as it represents the largest perimeter possible.
3. If no valid triangle is found, return -1.

## Result:
The code efficiently finds and returns the largest perimeter of a triangle that can be formed using three elements from the given array. The sorting of the array simplifies the process of identifying the largest elements, making it easy to check for the triangle inequality condition.
