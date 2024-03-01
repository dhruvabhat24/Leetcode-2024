## Maximum Odd Binary Number 

The `Solution` class defines a method `maximumOddBinaryNumber` that takes a binary string `s` as input and rearranges its digits to form the maximum odd binary number possible.

### Algorithm

1. Convert the input string `s` into a list of characters for easier manipulation.
2. Initialize a variable `left` to keep track of the position to swap the next "1" encountered.
3. Iterate through the characters of the string.
    - If a "1" is encountered, swap it with the element at position `left` and increment `left`.
4. Swap the last element of the string with the element at position `left - 1` to ensure the maximum odd binary number is formed.
5. Convert the list of characters back to a string and return the result.

### Example
```python
solution = Solution()
result = solution.maximumOddBinaryNumber("110110")
print(result)  # Output: "101110"
