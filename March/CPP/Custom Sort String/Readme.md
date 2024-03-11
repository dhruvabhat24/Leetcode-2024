## Class: Solution

This class contains a method `customSortString()` to sort a string `s` based on a custom order string `order`.

### Method: `customSortString`

Sorts the string `s` based on the custom order string `order`.

#### Parameters

- `order`: A string representing the custom order of characters.
- `s`: A string to be sorted.

#### Returns

A string representing the sorted version of `s` based on the custom order string `order`.

#### Approach

1. **Count Character Frequencies:**
   - Initialize a vector `sCounts` of size 26 (to represent lowercase English letters) and initialize all elements to 0.
   - Iterate through each character in string `s`:
     - Increment the count of the character's frequency in the `sCounts` vector based on its position in the alphabet.
2. **Sort Characters based on Custom Order:**
   - Initialize an empty string `result` to store the sorted string.
   - Iterate through each character in the `order` string:
     - While the frequency of the character in `sCounts` is greater than 0:
       - Append the character to the `result` string.
       - Decrement its frequency in the `sCounts` vector.
3. **Append Remaining Characters:**
   - Iterate through each lowercase English letter (from 'a' to 'z'):
     - While the frequency of the letter in `sCounts` is greater than 0:
       - Append the letter to the `result` string.
       - Decrement its frequency in the `sCounts` vector.
4. **Return Result:**
   - Return the `result` string, which represents the sorted version of `s` based on the custom order string `order`.

#### Time Complexity
- The time complexity of this method is O(N), where N is the length of the string `s`.
  - Counting character frequencies and sorting based on the custom order both require traversing the string `s` once, resulting in a linear time complexity.

#### Space Complexity
- The space complexity of this method is O(1) because the space used is independent of the input size.
  - The space used is constant, as the size of the `sCounts` vector remains fixed regardless of the input size.
