**Class Name:**

* `Solution`: This class provides a method to find the "town judge" in a trust network.

**Method:**

* `public int findJudge(int n, int[][] trust)`:
    * Takes an integer `n` representing the number of people and a 2D array `trust` representing trust relationships.
    * Returns the index (1-based) of the judge if one exists, or -1 otherwise.

**Logic:**

1. **Initialize Count and Arrays:**
    * `int count = 0`: Counts potential judges who trust nobody.
    * `int[] x = new int[n+1]`: Stores how many people trust each person (index 1 to n).
    * `int[] y = new int[n+1]`: Stores if each person (index 1 to n) trusts someone (1) or not (0).
    * Fill `x` with zeros and `y` with ones initially.

2. **Count Trusted People:**
    * Iterate through `trust` array:
        * For each trust relation `trust[i][0] -> trust[i][1]`:
            * Mark `trust[i][0]` (trusting person) in `x` as someone who trusts someone.

3. **Identify Potential Judges:**
    * Iterate through `x` (index 1 to n):
        * If `x[i] == 0` (no one trusts `i`), mark `y[i]` as 0 (potential judge) and increment `count`.

4. **Handle No Judge:**
    * If `count == n` (all are potential judges), return -1 (no judge).

5. **Find Judge and Verify:**
    * Iterate through `y` (index 1 to n):
        * If `y[i] == 1` (potential judge):
            * Set `jud` to `i`.
    * Count how many people trust `jud`:
        * Iterate through `trust`:
            * If `trust[i][1] == jud`, increment `c`.
    * If `c == n-1` (all except `jud` trust `jud`), return `jud`.

6. **No Judge Found:**
    * Otherwise, return -1.

**Key Points:**

- Uses two arrays to track trust relationships and potential judges.
- Handles cases with no judge or multiple potential judges.
- Verifies the identified judge by counting who trusts them.

**Assumptions:**

- People are represented by indices 1 to n.
- There is at most one judge.

I hope this explanation is helpful! 
