**Class Name:** `Solution`

**Method:** `public boolean isPowerOfTwo(int n)`

**Functionality:** Checks if `n` is a power of 2 (returns `true` if yes, `false` otherwise).

**Logic:**

1. **Non-positive check:**
   - If `n <= 0`, not a power of 2, return `false`.

2. **Count set bits:**
   - Use `Integer.bitCount(n)` to count set bits in `n`'s binary representation.

3. **Single set bit check:**
   - Return `true` only if `bitCount` is 1 (exactly one set bit).

**Time/Space Complexity:**

- **Time:** O(1) due to constant-time `bitCount`.
- **Space:** O(1) as it uses only constant extra space.

**Example Usage (main function):**

```java
Solution solution = new Solution();
System.out.println(solution.isPowerOfTwo(1));    // true
System.out.println(solution.isPowerOfTwo(16));   // true
System.out.println(solution.isPowerOfTwo(3));    // false
