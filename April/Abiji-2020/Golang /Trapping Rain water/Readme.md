# Trapping Rain Water

## Problem Statement
The problem tackled here is known as the "Trapping Rain Water" problem. Given an array representing the heights of bars, where the width of each bar is 1, the task is to calculate how much rainwater can be trapped between the bars.

## Approach
1. **Initialization**: Start by initializing variables and vectors necessary for the algorithm.
2. **Calculate Left Max Heights**: Traverse the array from left to right, and at each step, store the maximum height of the bars encountered so far from the left side.
3. **Calculate Right Max Heights**: Traverse the array from right to left, and at each step, store the maximum height of the bars encountered so far from the right side.
4. **Calculate Trapped Water**: Traverse the array once more and for each position, calculate the trapped water by finding the minimum of the left and right maximum heights at that position, subtracting the current height, and adding it to the total trapped water.
5. **Return the Result**: Return the total trapped water.

## Step by Step Process
1. **Initialization**:
   - Initialize variables `n` (size of the array) and `trappwater` (total trapped water).
   - Initialize two vectors `left` and `right` of size `n` to store the left and right maximum heights respectively.
2. **Calculate Left Max Heights**:
   - Start a loop from the second element of the array.
   - At each step, update the `left` vector with the maximum of the current height and the previous left maximum.
3. **Calculate Right Max Heights**:
   - Start a loop from the second last element of the array.
   - At each step, update the `right` vector with the maximum of the current height and the previous right maximum.
4. **Calculate Trapped Water**:
   - Traverse the array.
   - For each position, calculate the trapped water by finding the minimum of the left and right maximum heights at that position, subtracting the current height, and adding it to the total trapped water.
5. **Return the Result**:
   - Return the total trapped water.

## Complexity
- Time Complexity: O(n) - Three traversals of the array are done.
- Space Complexity: O(n) - Two additional arrays are used to store the left and right maximum heights.
