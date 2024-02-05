# First Unique Character in a String

## Class: Solution

This class contains a method to find the index of the first unique character in a given string.

### Method: `firstUniqChar`

Finds the index of the first unique character in the given string.

#### Parameters

- `s`: The input string.

#### Returns

An integer representing the index of the first unique character. If no unique character is found, return `-1`.

## Approach

The `firstUniqChar` method utilizes an unordered map to count the occurrences of each character in the string. It then iterates through the string to find the index of the first character with a count of 1, indicating uniqueness.

1. **Character Occurrence Map:**
   - Initialize an unordered map (`mp`) to store the occurrences of each character.

2. **Counting Occurrences:**
   - Iterate through the string and increment the count for each character in the map.

3. **Finding First Unique Character:**
   - Iterate through the string again.
   - For each character, check if its count in the map is equal to 1.
   - If found, return the index of the character.

4. **Result:**
   - Return the index of the first unique character. If no unique character is found, return `-1`.

The approach efficiently tracks character occurrences using a hash map, and the second iteration identifies the first unique character in the string.
