## Class: Solution

This class contains a method `intersection()` to find the intersection of two arrays `nums1` and `nums2`.

### Method: `intersection`

Finds the intersection of two arrays `nums1` and `nums2`.

#### Parameters

- `nums1`: A vector of integers representing the first array.
- `nums2`: A vector of integers representing the second array.

#### Returns

A vector of integers representing the intersection of `nums1` and `nums2`.

#### Approach

1. **Sort Arrays:**
   - Sort both arrays `nums1` and `nums2` in non-decreasing order.
2. **Two-Pointer Technique:**
   - Initialize two pointers `i` and `j` to 0, representing the current indices of `nums1` and `nums2` respectively.
   - Initialize an unordered set `s` to store unique intersection elements.
3. **Iterate Through Arrays:**
   - While `i` and `j` are within the bounds of `nums1` and `nums2` respectively:
     - If `nums1[i]` is equal to `nums2[j]`, add `nums1[i]` to the set `s` (as it is a common element) and increment both `i` and `j`.
     - If `nums1[i]` is less than `nums2[j]`, increment `i` to move forward in `nums1`.
     - If `nums1[i]` is greater than `nums2[j]`, increment `j` to move forward in `nums2`.
4. **Generate Result:**
   - Iterate through the set `s` and add all elements to the vector `ans`.
5. **Return Result:**
   - Return the vector `ans` containing the intersection elements.

#### Time Complexity
- The time complexity of this method is O(n * log n + m * log m), where n is the size of `nums1` and m is the size of `nums2`.
  - Sorting both arrays takes O(n * log n + m * log m) time.
  - The method then iterates through both arrays once, with the iteration stopping when a common element is found or when one of the arrays is fully traversed.

#### Space Complexity
- The space complexity of this method is O(k), where k is the size of the intersection between `nums1` and `nums2`.
  - The method uses an unordered set `s` to store unique intersection elements, which can contain at most k elements.
  - The vector `ans` also stores the intersection elements, but its space complexity is negligible compared to the set.
