## Class: Solution

This class provides a solution to find the least interval required to execute a given list of tasks, where each task is represented by a character.

### Method

#### `leastInterval`

This method calculates the least interval required to execute the given tasks with a cooldown period of \( n \) units between identical tasks.

##### Parameters

- `tasks`: A vector of characters representing the tasks to be executed.
- `n`: An integer representing the cooldown period between identical tasks.

##### Returns

An integer representing the least interval required to execute the tasks.

### Approach

1. **Task Frequency Calculation:**
   - Initialize an array `freq` of size 26 (since there are 26 different characters representing tasks) to store the frequency of each task.
   - Iterate through the tasks and update the frequency array accordingly.

2. **Sort Frequencies:**
   - Sort the frequency array in non-decreasing order.

3. **Calculate Idle Time:**
   - Calculate the chunk size by subtracting 1 from the frequency of the most frequent task.
   - Calculate the total idle time by multiplying the chunk size with \( n \).
   - Iterate through the frequency array (starting from the second most frequent task) and subtract the minimum of the chunk size and the frequency of each task from the total idle time.

4. **Return Result:**
   - If the total idle time is less than 0, return the sum of the number of tasks and the absolute value of the total idle time. Otherwise, return the sum of the number of tasks and 0.

### Time Complexity
- The time complexity of this method is \( O(26 \log 26 + \text{{tasks.size()}}) \), where \( \text{{tasks.size()}} \) is the number of tasks. This is because we iterate through the tasks to calculate frequencies and then sort the frequency array.

### Space Complexity
- The space complexity of this method is \( O(1) \) since we use a fixed-size array of size 26 to store the task frequencies.
