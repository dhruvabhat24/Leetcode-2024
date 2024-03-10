## Finding Intersections of Arrays

**Class:** `Solution`

**Method:** `public int[] intersection(int[] nums1, int[] nums2)`

**Purpose:** Identifies the elements that appear in both input arrays `nums1` and `nums2`.

**Logic:**

1. **Unique Elements in `nums1` (Using Set):**
   - **`Set<Integer> unqEle = new HashSet<>(Arrays.asList(nums1));`**: Creates a `HashSet` named `unqEle` and populates it with unique elements from `nums1` using `Arrays.asList` for convenience. HashSets efficiently store unique values.

2. **Intersection List:**
   - **`List<Integer> intersection = new ArrayList<>();`**: Initializes an `ArrayList` named `intersection` to store the common elements.

3. **Iterate Through `nums2` and Identify Intersections:**
   - **`for (int num : nums2) {`**: Loops through each element (`num`) in `nums2`.
     - **`if (unqEle.contains(num) && !intersection.contains(num)) {`**: Checks two conditions:
       - `unqEle.contains(num)`: Verifies if the current element (`num`) exists in `unqEle` (meaning it's present in `nums1`).
       - `!intersection.contains(num)`: Ensures the element hasn't already been added to the `intersection` list to avoid duplicates.
     - **`intersection.add(num);`**: If both conditions are true, the element is a common element, so it's added to the `intersection` list.

4. **Convert List to Array (Optional):**
   - **`return intersection.stream().mapToInt(Integer::intValue).toArray();`**: Converts the `intersection` list containing Integer objects into an `int[]` array using `stream().mapToInt(Integer::intValue)`. This step might be necessary depending on the expected return type.

**Key Points:**

- Utilizes a `HashSet` for efficient storage and retrieval of unique elements from `nums1`.
- Employs an `ArrayList` to store the intersection elements while avoiding duplicates.
- Converts the `List` to an `int[]` array if required by the return type.

**Assumptions:**

- The input arrays `nums1` and `nums2` may contain any valid integers.

**Time Complexity:**

- O(n + m) in the average and best cases, where `n` and `m` are the lengths of `nums1` and `nums2`, respectively. This is because the loops iterate through both arrays once.
- O(n + m) in the worst case, with the same time complexity as the average and best cases.

**Space Complexity:**

- O(n) in the worst case, as the `unqEle` set can potentially store all unique elements from `nums1`. The `intersection` list contributes a smaller additional space complexity.
