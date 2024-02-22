# Range Bitwise AND

The given Python code defines a class `Solution` with a method `rangeBitwiseAnd` that takes two integers `left` and `right` as input and returns the bitwise AND of all numbers in the inclusive range between `left` and `right`.

## Approach:

The code iterates through each bit position (from the least significant bit to the most significant bit) in the binary representation of `left`. For each bit position, it checks if setting that bit to 0 in the binary representation of `left` would bring it below `right`.

1. For each bit position `i`, obtain the bit value at that position in the binary representation of `left`.
2. If the bit value is 0, continue to the next iteration since setting it to 0 won't affect the result.
3. Calculate the remaining value when `left` is modulo `(1 << (i + 1))` and find the difference needed to reach the next power of 2.
4. If the difference is greater than the range between `left` and `right`, set the corresponding bit in the result `res`.
5. Repeat this process for all bit positions.

## Result:
The code efficiently calculates the bitwise AND of all numbers in the inclusive range between `left` and `right` by iteratively considering each bit position. This approach allows for determining the common prefix of the binary representations of the given range, resulting in the final bitwise AND value.
