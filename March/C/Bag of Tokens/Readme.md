# Explaination
The greedy strategy here is to get as many points as we can for the available power or gain the most power per the point spent. So, we sort the tokens first, and pick tokens left to right while we have enough power. Otherwise, we pick tokens right to left to gain power. We repeat this until we use all tokens or have no more points, tracking the maximum points (the result).

# Complexity
### Time complexity: O(n log n)

### Space complexity: O(1)
