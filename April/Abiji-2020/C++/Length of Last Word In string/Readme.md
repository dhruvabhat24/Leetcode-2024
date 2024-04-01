# Intuition
The problem requires finding the length of the last word in a given string `s`. We can accomplish this by iterating through the string and updating the length of the current word whenever encountering a space character. We maintain a variable to store the length of the last word encountered.

# Approach
1. **Initialization**:
   - Initialize variables `result` and `prev` to 0 to represent the length of the current word and the length of the last word encountered, respectively.

2. **Iterating Through the String**:
   - Iterate over each character `s[i]` in the string `s`.
   - If `s[i]` is a space character, reset the length of the current word `result` to 0.
   - Otherwise, increment the length of the current word `result`.
   - Update the value of `prev` to store the length of the last word encountered.

3. **Returning the Result**:
   - If the length of the last word is 0, return the value of `prev`.
   - Otherwise, return the length of the last word stored in `result`.

# Complexity Analysis
- Time Complexity: O(N), where N is the length of the input string `s`. We iterate through the string once.
- Space Complexity: O(1), as we use only a constant amount of extra space for variables.
