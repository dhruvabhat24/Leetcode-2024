**Class:** `Solution`

**Method:** `public int rangeBitwiseAnd(int left, int right)`

**Functionality:** Calculates the bitwise AND of all integers in the range `[left, right]`, inclusive.

**Logic:**

1. **Initialization:**
   - `res = right`: Set the result variable `res` to the larger number (`right`).

2. **Iterative AND:**
   - `while(right > left)`: Loop until `right` becomes equal to or less than `left`.
     - `res = right & (right-1)`: Perform bitwise AND between `res` and `right-1`.
       - This clears trailing 1s in `res` while preserving the leftmost 1 (if any).
     - `right = res`: Update `right` to the new value of `res`.

3. **Return Result:**
   - `return res`: Return the final value of `res` which holds the bitwise AND of all numbers in the range.

**Key Points:**

- **Function:** ANDs all bits present in all numbers within the range.
- **Time Complexity:** O(log n) due to the logarithmic iterative process.
- **Space Complexity:** O(1) using constant extra space.

**Example:**

- `rangeBitwiseAnd(5, 7)`: Iterations with values of `res`:
    - `res = 7 & 6 = 6`
    - `res = 6 & 5 = 4`
    - Returns `4` (bitwise AND of 5, 6, 7)

**Assumption:** Both `left` and `right` are non-negative integers.
