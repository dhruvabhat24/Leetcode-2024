# Count Palindromic Substrings

## Class: Solution

This class contains a method to count the number of palindromic substrings in a given string.

### Private Method: `check`

Checks for palindromic substrings centered at the given indices.

#### Parameters

- `l`: An integer representing the left index.
- `r`: An integer representing the right index.
- `ans`: An integer representing the current count of palindromic substrings.

#### Returns

An integer representing the updated count of palindromic substrings.

### Public Method: `countSubstrings`

Counts the number of palindromic substrings in the given string.

#### Parameters

- `s`: A string representing the input string.

#### Returns

An integer representing the total count of palindromic substrings in the input string.

### Approach

The `countSubstrings` method counts the number of palindromic substrings in the given string using the `check` method to determine palindromic substrings centered at each index.

1. **Initialization:**
   - Initialize a string `t` to store the input string `s`.
   - Initialize an integer `ans` to store the total count of palindromic substrings.

2. **Iterate Through String:**
   - Iterate through each character of the input string `s`.
   - For each character at index `i`:
      - Add the count of odd-length palindromic substrings centered at index `i` to `ans` using the `check` method.
      - Add the count of even-length palindromic substrings centered at indices `i` and `i+1` to `ans` using the `check` method.

3. **Result:**
   - After iterating through all characters, return `ans`, which represents the total count of palindromic substrings in the input string.

The approach efficiently counts the number of palindromic substrings by iterating through the input string and checking for palindromes centered at each index using the `check` method.
