# Intuition
The problem requires reversing a singly-linked list. To achieve this, we can iterate through the list while maintaining references to the current, next, and previous nodes. We update the next pointer of each node to point to the previous node, effectively reversing the list.

# Approach
- Initialize two pointers, prevNode and nextNode, to NULL.
- Iterate through the list using a while loop:
  - Within each iteration:
    - Assign the nextNode to the next pointer of the current node (head->next).
    - Update the next pointer of the current node to point to the previous node (prevNode).
    - Move prevNode to the current node (head).
    - Move head to the nextNode.
- Once the loop finishes, return prevNode, which now points to the head of the reversed list.

# Complexity Analysis
- Time Complexity: O(n), where n is the number of nodes in the linked list. We traverse the entire list once.
- Space Complexity: O(1), as we use a constant amount of extra space regardless of the size of the input list.
