# Approach
1. Initialize three pointers pre, curr, and newNode to NULL and head, where head points to the head of the linked list.
2. Traverse the list using the curr pointer until it becomes NULL
3. Inside the loop:
* Store the next node of curr in newNode.
* Reverse the next pointer of curr to point to the pre node.
* Move pre and curr pointers one step forward in the list.
4. After the loop, update the head pointer to point to the new head (pre).
5. Return the new head of the reversed list.
