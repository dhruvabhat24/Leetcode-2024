# Find All People in Meetings

The given Python code defines a class `Solution` with a method `findAllPeople` that takes an integer `n` representing the number of people and a list of meetings, along with the index of the first person. The task is to find all people who attended at least one meeting with the first person.

## Approach:

1. Build an adjacency list (`graph`) to represent the meetings' connections, where each node is a person, and its neighbors are tuples of meeting times and associated people.
2. Initialize an array `earliest` to store the earliest meeting time each person attended. Set initial values to infinity, except for the first person, which is set to 0.
3. Implement a depth-first search (DFS) function (`dfs`) to explore the meetings starting from both the first person and person 0, updating the earliest meeting times for each person.
4. During the DFS, if a meeting time is greater than or equal to the current time and the earliest meeting time for the next person is greater than the meeting time, update the earliest meeting time for the next person and recursively explore their meetings.
5. After DFS is completed for both the first person and person 0, create a list of people who attended at least one meeting with the first person by checking for those whose earliest meeting time is not infinity.

## Result:
The code efficiently identifies all people who attended at least one meeting with the specified first person. The DFS approach ensures that the earliest meeting times are accurately tracked, and the final result contains the relevant individuals who participated in meetings with the specified person.
