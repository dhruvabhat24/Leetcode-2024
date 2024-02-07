# Frequency Sort

## Class: Solution

This class contains a method to sort a string based on character frequencies.

### Method: `frequencySort`

Sorts the input string based on character frequencies.

#### Parameters

- `s`: The input string.

#### Returns

A string representing the sorted version of the input string based on character frequencies.

### Approach

The `frequencySort` method sorts the input string based on the frequency of characters using a hash map and a priority queue.

1. **Character Frequency Map:**
   - Initialize an unordered map (`mp`) to store the frequency of each character in the input string.
   - Iterate through each character in the input string and increment its frequency count in the map.

2. **Priority Queue Initialization:**
   - Define a custom comparator `cmp` for pairs of characters and their frequencies.
   - Initialize a priority queue (`pq`) with the custom comparator `cmp`.

3. **Priority Queue Population:**
   - Iterate through the character-frequency map.
   - Push each character-frequency pair into the priority queue.

4. **String Construction:**
   - Initialize an empty string (`st`) to store the sorted string.
   - While the priority queue is not empty:
      - Pop the top element from the priority queue.
      - Append the character to the string `st` `n` times, where `n` is the frequency of the character.

5. **Result:**
   - Return the string `st`, which represents the sorted version of the input string based on character frequencies.

The approach efficiently sorts the input string based on character frequencies using a hash map to count frequencies and a priority queue to sort characters based on their frequencies.
