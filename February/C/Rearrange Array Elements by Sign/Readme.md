# Approach
Allocate memory for the result array, which will store the rearranged elements.
Use two pointers (or indices in this case) to track the next positions for positive and negative numbers, ensuring that we alternate between them while filling the result array. We start with the assumption that the array contains an equal number of positive and negative integers and that we begin with a positive number.
Iterate through the nums array, placing positive numbers in the next available even index and negative numbers in the next available odd index of the result array. This guarantees that every consecutive pair of integers have opposite signs.

# Complexity
## Time complexity: O(n) 
## Space complexity: O(n)
