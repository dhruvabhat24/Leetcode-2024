## Class: Solution

This class provides a solution for inserting a new interval into a list of intervals while maintaining their order.

### Methods

#### `mergeInter`

This method merges two intervals and returns the merged interval.

##### Parameters

- `i1`: A constant reference to the first interval.
- `i2`: A constant reference to the second interval.

##### Returns

A vector representing the merged interval.

#### `intervalIsLess`

This method checks if the end of the first interval is less than the start of the second interval.

##### Parameters

- `i1`: A constant reference to the first interval.
- `i2`: A constant reference to the second interval.

##### Returns

- `true` if the end of `i1` is less than the start of `i2`.
- `false` otherwise.

#### `intervalIsLarger`

This method checks if the start of the first interval is larger than the end of the second interval.

##### Parameters

- `i1`: A constant reference to the first interval.
- `i2`: A constant reference to the second interval.

##### Returns

- `true` if the start of `i1` is larger than the end of `i2`.
- `false` otherwise.

#### `insert`

This method inserts a new interval into a list of intervals while maintaining their order.

##### Parameters

- `intervals`: A reference to a vector of vectors representing existing intervals.
- `newInterval`: A reference to a vector representing the new interval to be inserted.

##### Returns

A vector of vectors containing intervals with the new interval inserted.

### Approach

1. **Initialize Variables:**
   - Initialize an empty vector `result` to store the merged intervals.
   - Initialize a boolean variable `merged` to track whether the new interval has been merged.
   - If `intervals` is empty, push `newInterval` into `result` and return it.

2. **Merge Intervals:**
   - Iterate through each interval in `intervals`.
   - If the current interval is less than the new interval, push the new interval into `result` and mark it as merged.
   - If the current interval is larger than the new interval, push the current interval into `result`.
   - If there is an overlap between the current interval and the new interval, merge them using the `mergeInter` method and update `newInterval`.

3. **Check for Unmerged:**
   - If the new interval has not been merged, push it into `result`.

4. **Return Result:**
   - Return the merged `result` vector.

### Time Complexity
- The time complexity of this method is \(O(n)\), where \(n\) is the number of intervals, as it iterates through each interval once.

### Space Complexity
- The space complexity of this method is \(O(n)\), where \(n\) is the number of intervals, as it creates a new vector to store the merged intervals.
