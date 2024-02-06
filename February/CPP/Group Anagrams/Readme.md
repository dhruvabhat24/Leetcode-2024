# Group Anagrams

## Class: Solution

This class contains a method to group anagrams from a given vector of strings.

### Method: `groupAnagrams`

Groups anagrams from the given vector of strings.

#### Parameters

- `strs`: A vector of strings.

#### Returns

A vector of vectors of strings, where each inner vector represents a group of anagrams.

## Approach

The `groupAnagrams` method uses an unordered map to efficiently group anagrams. It iterates through each string in the input vector, sorts its characters, and uses the sorted string as a key in the map. The values in the map are vectors containing the original strings that are anagrams of each other.

1. **Anagram Grouping Map:**
   - Initialize an unordered map (`mp`) to store groups of anagrams.
   
2. **Iterate Through Input Strings:**
   - For each string in the input vector:
      - Create a copy of the string (`word`).
      - Sort the characters in `word` to obtain a unique key for anagrams.
      - Add the original string to the corresponding group in the map.

3. **Extract Groups:**
   - Initialize a vector of vectors of strings (`ans`) to store the final result.
   - Iterate through the map, adding each group of anagrams to the result vector.

4. **Result:**
   - Return the vector of vectors of strings, where each inner vector represents a group of anagrams.

The approach efficiently groups anagrams by using a sorted version of each string as a key in the hash map. This ensures that anagrams are grouped together, providing a concise solution for the problem.
