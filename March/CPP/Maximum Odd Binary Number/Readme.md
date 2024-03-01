## Class: Solution

This class provides a method `maximumOddBinaryNumber` to find the maximum odd binary number that can be obtained by swapping any two digits of the given binary number.

### Method: `maximumOddBinaryNumber`

Finds the maximum odd binary number that can be obtained by swapping any two digits of the given binary number.

#### Parameters

- `st`: A string representing the input binary number.

#### Returns

A string representing the maximum odd binary number obtained by swapping any two digits of the input binary number.

#### Approach

1. **Sort the Digits:**
   - Convert the input string `st` to a character array `s`.
   - Sort the character array `s` in non-increasing order to get the maximum possible number.

2. **Swap Digits:**
   - Iterate through the characters of the sorted array `s` from index 0 to `st.size() - 2`.
   - For each character, replace it with the next character in the sorted array `s`.
   - Replace the last character of the sorted array `s` with '1' to make it an odd number.

3. **Result:**
   - Return the resulting string `s`.

#### Time Complexity
- The time complexity of this method is O(n log n), where n is the length of the input string `st`, due to the sorting operation.

#### Space Complexity
- The space complexity of this method is O(n), where n is the length of the input string `st`, as it uses extra space to store the sorted character array `s`.
