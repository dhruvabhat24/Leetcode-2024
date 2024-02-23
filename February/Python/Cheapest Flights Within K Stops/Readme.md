# Cheapest Flights Within K Stops

The given Python code defines a class `Solution` with a method `findCheapestPrice` that calculates the cheapest price to reach the destination `dst` from the source `src` within `k` stops, considering a set of flights.

## Approach:

1. Build an adjacency list (`adj`) to represent the graph of flights, where each node is a source city, and its neighbors are tuples of destination cities and corresponding prices.
2. Initialize an array `dist` to store the minimum cost to reach each city from the source. Set all initial distances to infinity, except for the source, which is set to 0.
3. Use a breadth-first search (BFS) approach to traverse the graph up to `k` stops. Maintain a queue (`q`) to explore the cities and their associated costs.
4. In each iteration, update the minimum cost to reach a city if a shorter path is found.
5. Continue the BFS until `k` stops are reached or the queue is empty.
6. Return the minimum cost to reach the destination (`dist[dst]`) if it is not infinity; otherwise, return -1.

## Result:
The code efficiently finds the cheapest price to reach the destination within a given number of stops. The BFS approach helps explore possible paths in a systematic manner, updating the minimum costs along the way. This ensures an optimal solution for finding the cheapest flights within the specified constraints.
