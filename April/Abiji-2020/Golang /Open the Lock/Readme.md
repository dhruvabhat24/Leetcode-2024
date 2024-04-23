# Problem Statement: Open the Lock

You have a lock in front of you with 4 circular wheels. Each wheel has digits from '0' to '9'. The initial state of the lock is '0000' and the target state is given by a string `target`.

A dead end is a combination of digits on the lock that you are not allowed to pass through. You cannot turn the lock to a dead end.

Given a list of dead ends `deadends` and the target, return the minimum total number of turns required to open the lock. If it is impossible to open the lock, return -1.

## Intuition:

This problem can be solved using a breadth-first search (BFS) approach. We'll start from the initial state of the lock and perform BFS to explore all possible combinations until we reach the target state or exhaust all possibilities. 

## Detailed Approach:

1. Initialize a queue to perform BFS and a visited set to keep track of visited states.
2. Start BFS from the initial state '0000'.
3. For each state, generate all possible next states by rotating each wheel up or down by one digit.
4. Check if the next state is valid (not a dead end and not visited before).
5. If the next state is the target state, return the number of steps.
6. Otherwise, add the next state to the queue and mark it as visited.
7. Continue BFS until the queue is empty or the target state is found.
8. If the target state is not found after exploring all possibilities, return -1.

## Complexity Analysis:

- **Time Complexity:** O(N^2 * A^N + D), where N is the number of wheels on the lock, A is the number of digits (10), and D is the size of the deadends array. The algorithm explores all possible combinations of the lock, and each combination requires O(N) operations to generate neighboring states. Additionally, we need to check if each state is a dead end or visited, which takes O(1) time.
- **Space Complexity:** O(A^N + D), where A is the number of digits (10), and D is the size of the deadends array. We use a queue to perform BFS, which can hold up to O(A^N) states. Additionally, we use a set to store visited states and dead ends, which can hold up to O(D) elements.
