# Find First Palindrome in Vector of Strings

## Class: Solution

This class contains a method to find the first palindrome string in a vector of strings.

### Private Method: `ispali`

Checks whether a given string is a palindrome or not.

#### Parameters

- `s`: A constant reference to a string.

#### Returns

A boolean value indicating whether the input string is a palindrome.

### Public Method: `firstPalindrome`

Finds the first palindrome string in the vector of strings.

#### Parameters

- `words`: A vector of strings.

#### Returns

A string representing the first palindrome string found in the vector. If no palindrome string is found, an empty string is returned.

### Approach

The `firstPalindrome` method iterates through the vector of strings and checks each string for palindrome property using the `ispali` method.

1. **Palindrome Check:**
   - Iterate through each string in the vector `words`.
   - For each string `words[i]`:
      - Call the `ispali` method to check whether `words[i]` is a palindrome.
      - If `words[i]` is a palindrome, return `words[i]` as the first palindrome string found.

2. **Result:**
   - If no palindrome string is found after iterating through all strings, return an empty string.

The approach efficiently finds the first palindrome string in the vector of strings by iterating through the strings and checking each one for palindrome property.
