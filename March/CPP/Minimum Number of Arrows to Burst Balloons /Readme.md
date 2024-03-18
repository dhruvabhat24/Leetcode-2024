## Class: Solution

This class provides a solution to find the minimum number of arrows that must be shot to burst all balloons.

### Method

#### `findMinArrowShots`

This method finds the minimum number of arrows needed to burst all balloons.

##### Parameters

- `points`: A vector of vectors representing the points where the balloons are located. Each inner vector contains two integers `[x, y]`, where `x` represents the start coordinate of the balloon and `y` represents the end coordinate.

##### Returns

The minimum number of arrows required to burst all balloons.

### Approach

1. **Sort Points by End Coordinate:**
   - Sort the points based on their end coordinates in ascending order.

2. **Iterate Through Points:**
   - Initialize the number of arrows to 1.
   - Initialize the `prevEnd` variable to the end coordinate of the first balloon.
   - Iterate through each point:
     - If the start coordinate of the current balloon is greater than the `prevEnd`, increment the number of arrows and update `prevEnd` to the end coordinate of the current balloon.

3. **Return Number of Arrows:**
   - Return the total number of arrows required.

### Time Complexity
- The time complexity of this method is \(O(n \log n)\), where \(n\) is the number of balloons. This is due to the sorting of the points based on their end coordinates.

### Space Complexity
- The space complexity of this method is \(O(1)\) as it does not use any additional data structures that grow with the input size.
