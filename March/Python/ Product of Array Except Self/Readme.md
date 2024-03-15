# Product Except Self

This Python code defines a class `Solution` with a method `productExceptSelf`. This method takes a list of integers `nums` as input and returns a list of integers where each element is the product of all elements in `nums` except the element at the corresponding index.

## Algorithm Overview

1. Initialize an empty list `res` with the same length as `nums`, filled with 1's.
2. Initialize two variables: `prefix` and `postfix` to 1.
3. Iterate through the `nums` list:
   - For each element, store the current `prefix` value in the `res` list, then update `prefix` by multiplying it with the current element.
4. Iterate through the `nums` list in reverse:
   - For each element, multiply the corresponding element in `res` by the `postfix` value, then update `postfix` by multiplying it with the current element.
5. Return the resultant list `res`.
