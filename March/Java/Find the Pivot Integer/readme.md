```java
public class Solution {
    public int pivotInteger(int n) {
        // Calculate the sum of integers from 1 to n using the formula (n * (n + 1)) / 2
        int sum = (n * (n + 1)) / 2;
        // Initialize a variable to keep track of the cumulative sum
        long sumx = 0;

        // Iterate from 1 to n
        for (int i = 1; i <= n; i++) {
            // Update the cumulative sum by adding the current integer
            sumx += i;

            // Check if twice the cumulative sum (sumx) equals the total sum plus the current integer
            if (2 * sumx == sum + i) {
                // If the condition is met, return the current integer
                return i;
            }
        }

        // If no pivot integer is found, return -1
        return -1;
    }
}
```
### Explanation:

**`public int pivotInteger(int n):`**
- This method takes an integer `n` as input and returns an integer, which is the pivot integer (if found) or -1 (if not found).

**Calculating the Total Sum:**
- The total sum of integers from 1 to `n` is calculated using the formula `(n * (n + 1)) / 2`. This sum is stored in the variable `sum`.

**Initializing Cumulative Sum:**
- `sumx` is initialized as a long variable to store the cumulative sum. It starts at 0.

**Iterating Through Integers:**
- A loop iterates from 1 to `n`.
- Inside the loop, the current integer `i` is added to the cumulative sum `sumx`.

**Checking for Pivot Integer:**
- At each iteration, it checks whether twice the cumulative sum (`sumx`) equals the total sum (`sum`) plus the current integer `i`.
- If this condition holds true, it means that `i` is the pivot integer, as the sum of integers on both sides of `i` (excluding `i` itself) are equal.

**Returning the Pivot Integer or -1:**
- If a pivot integer is found, it is returned.
- If no pivot integer is found after iterating through all integers from 1 to `n`, -1 is returned.
