## Finding the First Common Element in Sorted Arrays

**Class:** `Solution`

**Method:** `public int getCommon(int[] nums1, int[] nums2)`

**Purpose:** Identifies the first element that appears in both sorted arrays `nums1` and `nums2`.

**Logic:**

1. **Early Termination Check (Optional):**
  - If the arrays don't overlap in value range, returns -1 immediately for efficiency.

2. **Two-Pointer Approach:**
  - Initializes pointers `i` and `j` to traverse `nums1` and `nums2` concurrently.

3. **Iterate and Compare:**
  - Loops while both pointers are within their respective arrays:
    - If `nums1[i] == nums2[j]`, returns the common element.
    - Advances the pointer for the smaller element to seek a match.

4. **No Common Element Found:**
  - Returns -1 if the loop completes without finding a common element.

**Key Points:**

- Leverages a two-pointer strategy for efficient comparison.
- Includes an optional early termination check for potential performance optimization.
- Relies on the arrays being sorted in ascending order.

**Assumptions:**

- Input arrays contain integers.
- Both arrays are sorted in ascending order.

**Time Complexity:**

- O(min(m, n)) in best and average cases.
- O(n) in the worst case, potentially improved by the early termination check.

**Space Complexity:**

- O(1) due to constant extra space usage.
