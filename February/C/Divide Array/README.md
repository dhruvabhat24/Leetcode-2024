## Intuition
If normal sort is applied, the time complexity becomes at leat O(nlog⁡n)O(n\log n)O(nlogn), but running time is 98ms & beats 100%; the python code is 1-liner.

Due to the constraints 1 <= nums[i] <= 10^5, 1 <= k <= 10^5, using a variant for counting sort is possible. The elapsed time for the revised C++ code is even faster, 74ms & beats 100%!!! The C code is rare which needs knowledge learned from old school , & is also implemented.

## Approach
Iterates through nums, updating frequency (freq) and tracking xMax and xMin.
A nested for loop iterates over the range of possible values.
Inner loop adds elements to vec3 and checks conditions for creating subarrays in groups of 3.

## Add on

If you see the declaration of C function like
int** divideArray(int* nums, int n, int k, int* returnSize, int** returnColumnSizes){...}
The returning int** ans must be mallocated & may reguarded as a 2D array. The parameters int* returnSize, int** returnColumnSizes are the variables so-called calling by address.

returnSize is int* pointer for which *returnSize is in fact the value for the size of returning size of for the 1st index of 2D array ans. Set *returnSize=0; just to make sure the returning size is really 0, otherwis it cannot pass the complier.

**returnColumnSize is int** pointer(pointer of pointer); its dereference,
i.e. *returnColumnSize may be reguarded as the array of ColumnSize which should be mallocated and assigned values with all 3.
