# Approach
<br> 1. We can initialize two pointers, one for each array, and iterate through both arrays simultaneously.<br>2. At each step, we compare the elements pointed to by the pointers. <br> 3. If the elements are equal, we return that element. <br> 4. If the element in the first array is greater than the element in the second array, we increment the pointer for the second array, and vice versa. <br> 5.We continue this process until we find a common element or exhaust one of the arrays.

## Complexity
### Time complexity: O(n+m)O(n + m)O(n+m), where nnn and mmm are the sizes of the two input arrays, respectively. We traverse through both arrays once.
### Space complexity: O(1)O(1)O(1)
