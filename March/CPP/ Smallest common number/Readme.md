## Class: Solution

This class contains a method `getCommon()` to find a common element between two sorted vectors of integers.

### Method: `getCommon`

Finds a common element between two sorted vectors of integers `nums1` and `nums2`.

#### Parameters

- `nums1`: A vector of integers representing the first sorted array.
- `nums2`: A vector of integers representing the second sorted array.

#### Returns

An integer representing a common element found between `nums1` and `nums2`. If no common element is found, it returns -1.

#### Approach

1. **Two-Pointer Technique:**
   - Initialize two pointers `i` and `j` to 0, representing the current indices of `nums1` and `nums2` respectively.
2. **Iterate Through Arrays:**
   - While `i` and `j` are within the bounds of `nums1` and `nums2` respectively:
     - If `nums1[i]` is equal to `nums2[j]`, return `nums1[i]` as it is a common element.
     - If `nums1[i]` is less than `nums2[j]`, increment `i` to move forward in `nums1`.
     - If `nums1[i]` is greater than `nums2[j]`, increment `j` to move forward in `nums2`.
3. **Return -1 if No Common Element:**
   - If no common element is found after iterating through both arrays, return -1.

#### Time Complexity
- The time complexity of this method is O(n + m), where n is the size of `nums1` and m is the size of `nums2`.
  - The method iterates through both arrays once, with the iteration stopping when a common element is found or when one of the arrays is fully traversed.

#### Space Complexity
- The space complexity of this method is O(1), as it uses only a constant amount of extra space for storing indices and return values.
- 
