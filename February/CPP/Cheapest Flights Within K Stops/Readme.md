# Find Cheapest Price within K Stops

## Class: Solution

This class contains a method `findCheapestPrice()` to find the cheapest price to reach the destination with at most `k` stops.

### Method: `findCheapestPrice`

Finds the cheapest price to reach the destination with at most `k` stops using BFS (Breadth-First Search).

#### Parameters

- `n`: An integer representing the number of cities.
- `flights`: A vector of vectors representing the flights between cities, where each flight is represented as `[source, destination, price]`.
- `src`: An integer representing the source city index.
- `dst`: An integer representing the destination city index.
- `k`: An integer representing the maximum number of stops allowed.

#### Returns

An integer representing the cheapest price to reach the destination with at most `k` stops. Returns `-1` if there is no such route.

### Approach

The `findCheapestPrice()` method utilizes BFS to traverse through the flights with at most `k` stops.

1. **Graph Representation:**
   - Build an adjacency list `adj` to represent the graph, where each node corresponds to a city and each edge represents a flight from one city to another with the corresponding price.

2. **Initialize Distances:**
   - Create a vector `dist` of size `n` to store the minimum cost to reach each city. Initialize all distances to `INT_MAX` except for the source city (`src`) which is initialized to `0`.

3. **Breadth-First Search:**
   - Start BFS by enqueuing the source city (`src`) along with its distance (0) into a queue `q`.
   - While the queue is not empty and the number of stops is less than or equal to `k`, perform the following steps:
     - Dequeue a node along with its distance from the front of the queue.
     - If the dequeued node is not present in the adjacency list, continue to the next iteration.
     - For each neighbor of the dequeued node, calculate the total cost to reach the neighbor and update its distance if the newly calculated cost is less than the current distance.
     - Enqueue the neighbor along with its updated distance into the queue.
   - Increment the number of stops after processing all nodes at the current level.

4. **Result:**
   - After BFS, the minimum cost to reach the destination city (`dst`) is stored in `dist[dst]`. Return this value if it is not equal to `INT_MAX`, indicating a valid route exists within `k` stops. Otherwise, return `-1`.

The approach efficiently finds the cheapest price to reach the destination city with at most `k` stops using BFS traversal of the flight graph.
