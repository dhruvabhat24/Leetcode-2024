# Largest Perimeter Polygon

## Class: Solution

This class contains a method to find the largest perimeter of a polygon that can be formed using elements from an array.

### Method: `largestPerimeter`

Finds the largest perimeter of a triangle that can be formed using elements from the array.

#### Parameters

- `nums`: A vector of integers representing the input array.

#### Returns

A long long integer representing the largest perimeter of a polygon that can be formed. If no such polygon exists, returns -1.

### Approach

The `largestPerimeter` method finds the largest perimeter of a polygon that can be formed using elements from the array.

1. **Sorting:**
   - Sort the input array `nums` in non-decreasing order.

2. **Sum Calculation:**
   - Calculate the sum of all elements in the array and store it in the variable `sum`.

3. **Polygon  Check:**
   - Iterate from the end of the sorted array to the third element (indices `nums.size() - 1` to `2`).
      - Subtract the value of the current element `nums[i]` from the sum `sum`.
      - If the remaining sum is greater than the current element (i.e., `sum > nums[i]`), it implies that a polygon with sides `sum`, `nums[i]`, and another element from the array can be formed.
         - Return the sum of `sum` and `nums[i]` as the largest perimeter of the polygon.

4. **Result:**
   - If no such polygon can be formed after iterating through all elements, return -1.

The approach efficiently finds the largest perimeter of a polygon that can be formed using elements from the array by iterating through the sorted array and checking for the polygon condition.
