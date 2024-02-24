# Find All People

## Class: Solution

This class contains a method `findAllPeople()` to find all people who can attend meetings without overlapping schedules.

### Method: `findAllPeople`

Finds all people who can attend meetings without overlapping schedules using Dijkstra's algorithm with a priority queue.

#### Parameters

- `n`: An integer representing the number of people.
- `meetings`: A vector of vectors representing the meetings schedule. Each inner vector contains three elements: the start time, end time, and the person involved in the meeting.
- `firstPerson`: An integer representing the index of the person from which the search starts.

#### Returns

A vector of integers representing the indices of people who can attend meetings without overlapping schedules.

### Approach

The `findAllPeople()` method utilizes Dijkstra's algorithm with a priority queue to efficiently find all people who can attend meetings without overlapping schedules.

1. **Graph Representation:**
   - Construct an adjacency list `adj` to represent the graph, where each node corresponds to a person, and each edge represents a meeting. The weight of each edge is the end time of the meeting.

2. **Priority Queue Initialization:**
   - Initialize a priority queue `pq` to store pairs of time and person indices. Use a min-heap property to ensure that the person with the earliest available meeting time is prioritized.
   - Push two pairs into the priority queue: `{0, 0}` and `{0, firstPerson}`. The first pair represents the initial state with time 0, and the second pair represents the starting person with index `firstPerson`.

3. **Dijkstra's Algorithm:**
   - While the priority queue is not empty, perform the following steps:
     - Pop the top pair `(time, person)` from the priority queue.
     - If the person is already visited, continue to the next iteration.
     - Mark the person as visited.
     - Iterate through each adjacent person `adjPerson` of the current person:
       - If `adjPerson` is not visited and the end time of the meeting with `adjPerson` is greater than or equal to the current time:
         - Push the pair `{endTime, adjPerson}` into the priority queue, where `endTime` is the end time of the meeting with `adjPerson`.
   
4. **Result Extraction:**
   - After processing all reachable people, create a vector `ans` to store the indices of people who can attend meetings without overlapping schedules.
   - Iterate through each person index `i` from 0 to `n-1`:
     - If the person with index `i` is visited, push `i` into the `ans` vector.
   - Return the `ans` vector as the result.

The approach efficiently finds all people who can attend meetings without overlapping schedules using Dijkstra's algorithm with a time complexity of O(E log V), where E is the number of edges (meetings) and V is the number of vertices (people).
