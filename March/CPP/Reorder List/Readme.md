# Intuition
To reorder a singly-linked list such that the first node is followed by the last, the second node is followed by the second last, and so on, we can use a stack to store the nodes in reverse order. Then, we iterate through the list, popping nodes from the stack and inserting them after each node until we reach the middle of the list.

# Approach
1. **Using a Stack**:
   - Traverse the list and push each node onto a stack.
   - Traverse the list again, popping nodes from the stack and inserting them after each node.
   - Stop when we reach the middle of the list or the stack is empty.

2. **Reordering the List**:
   - Traverse the list using two pointers: `curr` and `last`.
   - Pop a node `last` from the stack and insert it after `curr`.
   - Advance `curr` and `last` pointers accordingly.
   - Repeat the process until we reach the middle of the list or encounter a previously visited node.
   - Set the `next` pointer of the last node to `NULL` to terminate the list.

# Complexity Analysis
- Time Complexity: O(N), where N is the number of nodes in the linked list. We traverse the list twice.
- Space Complexity: O(N), where N is the number of nodes in the linked list. We use a stack to store the nodes temporarily.
