# Approach
1. First, we sort the balloons based on their end coordinates. This allows us to iterate through the balloons in ascending order of their end coordinates.
2. We initialize the variable arrows to 1, assuming that at least one arrow is needed.
3. We iterate through the sorted balloons and compare the start coordinate of the current balloon with the end coordinate of the previous balloon.
4. If the start coordinate of the current balloon is greater than the end coordinate of the previous balloon, it means these two balloons do not overlap, so we need to shoot another arrow. We increment the arrows count and update the prevEnd variable to the end coordinate of the current balloon.
5. After iterating through all balloons, arrows will contain the minimum number of arrows needed.
