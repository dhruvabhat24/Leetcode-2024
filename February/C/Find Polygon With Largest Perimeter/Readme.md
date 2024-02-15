# Approach
The code first sorts the array a in ascending order using Quick Sort, making it easier to check triangle validity later.It iterates through the sorted array, keeping track of the current perimeter (m) and potential maximum perimeter (r). If the current element is smaller than the difference between the previous two (m - a[i]), it indicates a violation of the triangle inequality, and the potential maximum perimeter (r) is updated with the previous sum (m) plus the current element.After iterating through all elements, r will hold the maximum valid perimeter that could be formed by any three sides in the array, or -1 if no valid triangle 


## Complexity
### Time complexity:The time complexity of the given code is O(nlogn).
### Space complexity:The space complexity of the given code is O(logn).
