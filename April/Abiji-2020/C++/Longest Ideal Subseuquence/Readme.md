# Longest Ideal String

## Problem Statement

Given a string `s` consisting of lowercase English letters and an integer `k`, we define an "ideal" string as one that can be obtained by removing exactly `k` characters from `s` such that each letter appears no more than once in the resulting string. Return the length of the longest ideal string that can be formed.


## Intuition

To find the longest ideal string, we need to remove a minimum number of characters such that each letter appears at most once in the resulting string. This suggests a dynamic programming approach where we track the longest ideal string that can be obtained at each index `i` of the input string `s`.

## Approach

1. Initialize an array `dp` of size 27 (representing lowercase English letters) to store the length of the longest ideal string that can be obtained ending at each letter.
2. Iterate over the input string `s` from right to left.
3. For each character at index `i`, calculate the index `idx` by subtracting the ASCII value of 'a'. Initialize a variable `maxi` to store the maximum length of the ideal string that can be obtained ending at character `s[i]`.
4. Determine the range of characters to consider for the current character `s[i]`. Let `left` be the maximum index such that `s[left]` is within `k` characters to the left of `s[i]`, and `right` be the minimum index such that `s[right]` is within `k` characters to the right of `s[i]`.
5. Iterate over the range `[left, right]` and update `maxi` with the maximum value of `dp[j]` for each character `s[j]` within the range.
6. Update `dp[idx]` with `maxi + 1`, indicating the length of the longest ideal string that can be obtained ending at character `s[i]`.
7. Iterate over the `dp` array to find the maximum value, which represents the length of the longest ideal string.
8. Return the maximum value found.

## Complexity Analysis

- **Time Complexity**: 
  - The outer loop runs for each character in the input string, resulting in a time complexity of O(n), where n is the length of the input string `s`.
  - The inner loop for determining the range of characters also runs in constant time.
  - Overall, the time complexity is O(n).
- **Space Complexity**: 
  - We use an additional array `dp` of size 27, resulting in a space complexity of O(1).

