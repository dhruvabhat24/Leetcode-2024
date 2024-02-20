# Missing Number Detection

## Class: Solution

This class contains a method `missingNumber()` to detect the missing number in an array of integers.

### Method: `missingNumber`

Detects the missing number in the array of integers.

#### Parameters

- `nums`: A vector of integers.

#### Returns

An integer representing the missing number in the array.

### Approach

The `missingNumber()` method uses an unordered map to count the occurrences of each number in the input array and then iterates through the possible numbers to find the missing one.

1. **Count Occurrences:**
   - Create an unordered map `mp` to count the occurrences of each number in the input array `nums`.
   - Iterate through the input array `nums`:
     - Increment the count of the current number in the map `mp`.

2. **Find Missing Number:**
   - Iterate through the range from 0 to the size of the input array `nums` (inclusive):
     - Check if the count of the current number in the map `mp` is zero.
     - If the count is zero, return the current number, indicating that it is missing from the array.

3. **Return Result:**
   - If no missing number is found during the iteration, return -1, indicating that there is no missing number in the array.

The approach efficiently detects the missing number in an array of integers using an unordered map to count the occurrences of each number and then iterating through the possible numbers to find the missing one.
