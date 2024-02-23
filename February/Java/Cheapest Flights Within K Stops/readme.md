**Class Name:**

* `Solution`: This class provides a method to find the cheapest price for a flight journey.

**Method:**

* `public int findCheapestPrice(int n, int[][] flights, int src, int dst, int k)`:
    * Takes:
        * `n`: Number of cities.
        * `flights`: 2D array representing flights (from, to, price).
        * `src`: Source city index.
        * `dst`: Destination city index.
        * `k`: Maximum allowed stops (including the origin).
    * Returns: The cheapest price to reach `dst` from `src` with at most `k` stops, or -1 if not possible.

**Logic:**

1. **Dynamic Programming Array:**
    * `dp`: 2D array to store minimum prices for different stops and cities.
        * `dp[i][j]`: Minimum price to reach city `j` with at most `i` stops.
    * Initialize all `dp` values to `Integer.MAX_VALUE` (no paths initially).
    * Set `dp[0][src] = 0` (cost to reach source is 0).

2. **Iterative Price Updates:**
    * For each stop `i` from 1 to `k+1`:
        * For each flight `f`:
            * If reaching `f[0]` (from city) within `i-1` stops is possible (`dp[i-1][f[0]]` not infinite):
                * Update the minimum price to reach `f[1]` (to city) with `i` stops:
                    * `dp[i][f[1]] = Math.min(dp[i][f[1]], dp[i-1][f[0]] + f[2])` (cheapest option)

3. **Return Result:**
    * If `dp[k+1][dst]` is still `Integer.MAX_VALUE`, no path exists within `k` stops. Return -1.
    * Otherwise, return the minimum price stored in `dp[k+1][dst]`.

**Key Points:**

- **Dynamic Programming:** Builds solutions for subproblems (reaching each city with different stops) to find the overall cheapest path.
- **Iterative Updates:** Gradually calculates minimum prices for each stop and city based on previous stop possibilities and available flights.
- **Time Complexity:** O(k * n * flights.length) due to nested loops.
- **Space Complexity:** O(k * n) for the `dp` array.

I hope this explanation is helpful!
