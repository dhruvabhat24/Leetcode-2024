# Tribonacci Number

## Problem Statement
Given an integer `n`, return the nth tribonacci number.
The tribonacci sequence is defined as follows:
- T(0) = 0
- T(1) = 1
- T(2) = 1
- T(n) = T(n - 1) + T(n - 2) + T(n - 3) for n > 2

## Approach
- Initialize an array to store tribonacci numbers up to a certain index.
- Fill in the array iteratively, using the recurrence relation.
- Return the nth tribonacci number.

## Complexity Analysis
- **Time Complexity:** O(n). The function iterates from 3 to n, calculating each tribonacci number once.
- **Space Complexity:** O(1). The function uses a fixed-size array of a certain length to store the tribonacci numbers, independent of the input size `n`.
