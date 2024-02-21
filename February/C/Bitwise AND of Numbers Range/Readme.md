# Approach
To compute the bitwise AND of all numbers in the range [left, right], you can iterate through the range and perform bitwise AND operation on all the numbers. However, there's a more efficient solution.

The bitwise AND operation between two numbers results in a number where each bit is 1 if and only if the corresponding bits of both numbers are 1. When you're considering a range [left, right], if the two numbers have different bits in any position, then the result of the AND operation will have a 0 in that position. So, you only need to find the common prefix of the binary representation of left and right.

# Steps

<br> 1. Keep shifting both left and right one bit to the right until they become equal. This process strips off the differing bits, finding the common prefix.
<br> 2. Count the number of shifts. This tells us how many positions the common bits have been shifted.
<br> 3. Shift the now equal left (or right) back to its original position by shifting it left by the number of shifts. This restores the common prefix to its original bit position, with all other bits to the right being zero.
<br> 4. Return the shifted left as the result, which is the bitwise AND of all numbers in the range.
