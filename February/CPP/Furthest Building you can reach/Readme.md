# Furthest Building You Can Reach

## Class: Solution

This class contains a method to determine the furthest building you can reach with a given number of bricks and ladders.

### Method: `furthestBuilding`

Determines the furthest building you can reach with a given number of bricks and ladders.

#### Parameters

- `heights`: A vector of integers representing the heights of buildings.
- `bricks`: An integer representing the number of bricks available.
- `ladders`: An integer representing the number of ladders available.

#### Returns

An integer representing the index of the furthest building you can reach.

### Approach

The `furthestBuilding` method determines the furthest building you can reach with a given number of bricks and ladders by utilizing a priority queue.

1. **Initialization:**
   - Initialize a priority queue `p` to store the differences in heights between adjacent buildings.
   - Initialize variables `diff` and `i` to track the height difference and the current index respectively.

2. **Building Traversal:**
   - Iterate through the heights of buildings from index `0` to `heights.size() - 2`:
      - Calculate the height difference `diff` between the current building and the next building.
      - If the height difference `diff` is less than or equal to zero, continue to the next iteration as no additional resources are required.
      - Otherwise, deduct the height difference `diff` from the available bricks.
      - Push the height difference `diff` into the priority queue `p`.
      - If the remaining bricks become negative:
         - Add the height difference at the top of the priority queue back to the bricks.
         - Pop the height difference at the top of the priority queue.
         - Deduct one ladder from the available ladders.
      - If the remaining ladders become negative, break the loop.

3. **Result:**
   - After the loop completes, return the current index `i`, which represents the index of the furthest building you can reach with the given number of bricks and ladders.

The approach efficiently determines the furthest building you can reach with a given number of bricks and ladders.
