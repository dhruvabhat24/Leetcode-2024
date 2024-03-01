### The goal is to find the maximum odd binary number by manipulating the given binary string. Since an odd binary number ends with '1', we aim to move the rightmost '1' as far right as possible while maintaining the order of other digits.

# Approach
Initialize last_one to the last index of the string s.
Move last_one towards the left until reaching the first '1' encountered, or until the beginning of the string.
If last_one is not pointing to the last character, swap the character at last_one with the last character of s.
Sort the characters from the beginning of s up to the second last character in non-increasing order using sort function with a custom comparison function.
Return the modified string.


## Complexity
### Time complexity: O(n^2)
### Space complexity: O(1)
