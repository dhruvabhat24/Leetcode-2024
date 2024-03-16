# Predefined 
The Following Statement regarding malloc() , calloc() mentioned in the Code Interface (in Leetcode) is mentioned as ,  C Programming deals With Different Dynamic Functions such as malloc() , calloc(), realloc() and free(). These Functions are used for dynamically allocating the memory for array.

# Approach
<br> 1. Initialize two arrays left and right, each of size n, where n is the length of the input array nums.<br> 2.
Initialize left[i] to store the product of all elements to the left of nums[i] and right[i] to store the product of all elements to the right of nums[i].<br> 3.
Calculate left array by iterating from left to right and multiplying the previous element's value with the current element. <br> 4.
Calculate right array by iterating from right to left and multiplying the previous element's value with the current element. <br> 5.
Finally, calculate the result array by multiplying left[i] and right[i] for each index i.


# Complexity
### Time complexity: O(n) where n is the length of the input array nums. 
### Space complexity: O(n).
