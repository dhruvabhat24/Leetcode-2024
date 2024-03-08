## Class: Solution

This class contains a method `maxFrequencyElements()` to find the maximum frequency of elements in a given vector.

### Method: `maxFrequencyElements`

Finds the maximum frequency of elements in a given vector and calculates the result by multiplying the maximum frequency with the count of elements having that frequency.

#### Parameters

- `nums`: A vector of integers representing the input elements.

#### Returns

An integer representing the maximum frequency of elements multiplied by the count of elements having that frequency.

#### Approach

1. **Frequency Calculation:**
   - Iterate through the input vector `nums` and store the frequency of each element in an unordered map.
2. **Find Maximum Frequency:**
   - Iterate through the unordered map to find the maximum frequency of any element.
3. **Count Elements with Maximum Frequency:**
   - Iterate through the unordered map again to count the number of elements having the maximum frequency found in the previous step.
4. **Calculate Result:**
   - Multiply the maximum frequency by the count of elements having that frequency to get the final result.

#### Time Complexity
- The time complexity of this method is O(n), where n is the size of the input vector `nums`. The method iterates through the vector once to calculate the frequency of each element and then iterates through the unordered map to find the maximum frequency and count the elements.

#### Space Complexity
- The space complexity of this method is O(n), where n is the number of unique elements in the input vector `nums`. The method uses an unordered map to store the frequency of each element.
