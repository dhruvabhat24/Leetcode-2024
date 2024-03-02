**Explanation of `sortedSquares` in Markdown:**

**Class:** `Solution`

**Method:** `public int[] sortedSquares(int[] nums)`

**Purpose:** Sorts the squares of the elements in an integer array `nums` in ascending order.

**Logic:**

1. **Initialization:**
    - `n`: Stores the length of the input array `nums`.
    - `res`: Creates a new integer array `res` of the same size as `nums` to hold the squared and sorted values.

2. **Square Elements:**
    - Iterates through each element `nums[i]` in `nums` using a for loop:
        - Squares the current element `nums[i]` and stores the result in the corresponding index `i` of the `res` array (`res[i] = nums[i] * nums[i]`).

3. **Sort Squared Elements:**
    - Sorts the elements in `res` using the built-in `Arrays.sort(res)` method, arranging them in ascending order.

4. **Return Result:**
    - Returns the sorted array `res`, containing the squares of the original elements in ascending order.

**Key Points:**

- Employs separate steps for squaring and sorting to maintain clarity.
- Leverages `Arrays.sort` for efficient sorting.

**Assumptions:**

- The input array `nums` may contain any valid integers.

**Time Complexity:**

- O(n) for iterating through the array to square elements.
- O(n log n) for sorting using `Arrays.sort`.

**Space Complexity:**

- O(n) for creating the `res` array to store the squared elements.
