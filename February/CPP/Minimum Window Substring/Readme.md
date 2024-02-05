# Minimum Window Substring

## Class: Solution

This class contains a method to find the minimum window substring in string `s` that contains all characters from string `t`.

### Method: `minWindow`

Finds the minimum window substring in string `s` that contains all characters from string `t`.

#### Parameters

- `s`: The input string.
- `t`: The target string.

#### Returns

A string representing the minimum window substring in `s` containing all characters from `t`.

## Approach

The `minWindow` method employs a sliding window approach to find the minimum window substring in string `s` that contains all characters from string `t`.

1. **Initialization:**
   - Check if the length of string `s` is less than the length of string `t`. If true, return an empty string.
   - Check if string `s` is equal to string `t`. If true, return string `t`.
   - Initialize a character frequency map (`map`) to track character occurrences.
   - Initialize variables `count`, `start`, `end`, `minLen`, and `startIndex`.

2. **Character Frequency Map:**
   - Create a character frequency map for string `t` using the `map` vector.

3. **Sliding Window:**
   - Move the `end` of the window to the right while decreasing the frequency of characters in the map.
   - When the frequency becomes zero, decrement the `count` of remaining characters in `t`.

4. **Minimum Window Update:**
   - When all characters from `t` are found in the current window, check if the window size is smaller than the current minimum length.
   - If true, update `startIndex` and `minLen`.

5. **Shrinking Window:**
   - Move the `start` of the window to the right until the window no longer contains all characters from `t`.
   - Increase the frequency of characters in the map.

6. **Result:**
   - Return the minimum window substring in `s` containing all characters from `t`. If no such substring exists, return an empty string.

The sliding window approach efficiently explores substrings of `s` to find the minimum window containing all characters from `t`. The algorithm maintains a character frequency map and adjusts the window boundaries accordingly.
