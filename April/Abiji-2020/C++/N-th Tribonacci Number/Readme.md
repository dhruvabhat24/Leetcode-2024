# Tribonacci Number

## Problem Statement
Given an integer `n`, return the nth tribonacci number.
The tribonacci sequence is defined as follows:
- T(0) = 0
- T(1) = 1
- T(2) = 1
- T(n) = T(n - 1) + T(n - 2) + T(n - 3) for n > 2

## Intuition
The problem can be solved using an iterative approach similar to the Fibonacci sequence. We initialize three variables `a`, `b`, and `c` representing the last three tribonacci numbers. We iterate through the sequence, updating these variables until we reach the desired index `n`.

## Detailed Approach
1. Initialize `a = 0`, `b = 1`, and `c = 1`.
2. If `n` is less than 2, return `n`.
3. Otherwise, enter a loop until `n` is greater than 2:
   - Calculate the next tribonacci number `t` as the sum of `a`, `b`, and `c`.
   - Update `a`, `b`, and `c` as `b`, `c`, and `t` respectively.
   - Decrement `n` by 1 in each iteration.
4. After the loop, return the value of `c`, which represents the nth tribonacci number.

## Complexity Analysis
- **Time Complexity:** The time complexity of this approach is O(n) since we iterate `n` times to calculate the nth tribonacci number.
- **Space Complexity:** The space complexity is O(1) since we only use a constant amount of extra space for variables `a`, `b`, `c`, and `t`.
