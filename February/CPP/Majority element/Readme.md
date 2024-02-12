# Majority Element

## Class: Solution

This class contains a method to find the majority element in a given vector of integers.

### Method: `majorityElement`

Finds the majority element in the given vector of integers.

#### Parameters

- `nums`: A vector of integers.

#### Returns

An integer representing the majority element in the input vector.

### Approach

The `majorityElement` method utilizes a hash map to count the occurrences of each element in the input vector and then identifies the element with the majority count.

1. **Count Occurrences:**
   - Initialize an unordered map `mp` to store the count of occurrences of each element.
   - Iterate through each element `x` in the input vector `nums`.
   - Update the count of `x` in the map `mp`.

2. **Identify Majority Element:**
   - Iterate through each key-value pair `y` in the map `mp`.
   - Check if the count `y.second` of the current element `y.first` is greater than half the size of the input vector `nums`.
   - If the count is greater than half, return the current element as the majority element.

3. **Handle Absence of Majority Element:**
   - If no majority element is found during iteration, return 0.

The approach efficiently finds the majority element in the input vector by counting occurrences using a hash map and then identifying the element with the majority count.
