## Class: Solution

This class contains a method `sortedSquares()` to return the squares of the sorted elements of a given vector `nums`.

### Method: `sortedSquares`

Returns a new vector containing the squares of the sorted elements of the given vector `nums`.

#### Parameters

- `nums`: A vector of integers containing the input elements.

#### Returns

A vector of integers representing the squares of the sorted elements of the given vector `nums`.

#### Approach

1. **Square the Elements:**
   - Iterate through each element `x` in the vector `nums`.
   - Replace each element `x` with its square using the `pow()` function.

2. **Sort the Squared Elements:**
   - Sort the vector `nums` containing the squared elements using the `sort()` function.

3. **Return the Sorted Squared Elements:**
   - Return the sorted vector `nums`.

#### Time Complexity
- The time complexity of this method depends on the sorting algorithm used. If the sorting algorithm is efficient (e.g., QuickSort), the time complexity is O(n log n), where n is the size of the input vector `nums`. The iteration to square the elements takes linear time, which is dominated by the sorting operation.

#### Space Complexity
- The space complexity of this method is O(1) since it does not use any extra space that grows with the size of the input.
