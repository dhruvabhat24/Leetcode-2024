
**Class:** `Solution`

**Method:** `public boolean canTraverseAllPairs(int[] nums)`

**Purpose:** Checks if all pairs of numbers in `nums` can be connected through shared prime factors.

**Logic:**

1. **Initialization:**
   - `maxNum`: Maximum number in `nums` (using `Arrays.stream(nums).max().getAsInt()`).
   - `uf`: Union-Find object for tracking connections.
   - `primeToIndex`: Map to store the first occurrence of each prime factor (index).

2. **Process Numbers:**
   - Iterate through each number `num` in `nums`:
     - Iterate through potential prime factors (`factor`) from 2 to the square root of `num`:
       - If `factor` divides `num`:
         - Call `handlePrimeFactor` to manage the prime factor.
         - Remove all occurrences of `factor` from `num`.
     - If the remaining `num` is prime (greater than 1):
       - Call `handlePrimeFactor` to manage it.

3. **Check Connectivity:**
   - Use `isAllConnected` to check if all indices in `uf` are connected, indicating reachability between all pairs.

**Helper Functions:**

- **`private void handlePrimeFactor(factor, index, uf, primeToIndex)`:**
   - If `factor` is not in `primeToIndex`, add it with the current `index`.
   - Otherwise, connect the current `index` to the previous occurrence of `factor` in `uf`.

- **`private boolean isAllConnected(uf, length)`:**
   - Iterate through indices 1 to `length-1` in `uf`:
     - If any index is not connected to index 0 (the root), return `false`.
   - If all indices are connected, return `true`.

**Key Points:**

- Uses Union-Find for efficient connection tracking based on shared prime factors.
- Leverages a map for storing and retrieving prime factor occurrences.
- Relies on the principle that numbers sharing a prime factor can be connected by dividing by that factor.
- Determines reachability by checking if all indices are connected in the Union-Find structure.

**Assumptions:**

- `nums` contains positive integers.
- Connectivity is defined by the ability to reach one number from another through shared prime factors.
