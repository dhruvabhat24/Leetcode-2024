# Intuition
The intuition behind this solution is to count the number of students who prefer each type of sandwich. Then, iterate through the sandwiches and try to match them with the available students. If there are no more students who prefer a certain type of sandwich, return the count of remaining sandwiches.

# Approach
1. Initialize a vector `count` of size 2 with all elements set to 0 to count the number of students who prefer each type of sandwich.
2. Iterate through the `students` vector and count the number of students who prefer each type of sandwich.
3. Iterate through the `sandwiches` vector.
    - If there are no more students who prefer the current type of sandwich, return the count of remaining sandwiches.
    - Decrease the count of students who prefer the current type of sandwich.
4. If all sandwiches are matched successfully, return 0.

# Complexity
- Time complexity: O(n), where n is the size of the `sandwiches` vector.
- Space complexity: O(1) since we are using a fixed-size vector to count the students.
