# Finding the Middle Node of a Singly Linked List

This code defines a `Solution` class with a method `middleNode` to determine the middle node of a singly-linked list. The linked list is represented using the `ListNode` class, which has a value (`val`) and a reference to the next node (`next`).

## Algorithm
The code uses two pointers, `slow` and `fast`, initially set to the head of the linked list. The `fast` pointer advances twice as fast as the `slow` pointer, allowing it to reach the end of the list. Meanwhile, the `slow` pointer moves one step at a time. When the `fast` pointer reaches the end (or becomes `None`), the `slow` pointer will be at the middle of the linked list.

## Input
- `head`: The head of the singly-linked list.

## Output
- Returns the middle node of the linked list.

Note: The code handles cases where the linked list has an odd or even number of nodes by advancing the `fast` pointer two steps at a time and stopping when it reaches the end.

Example Usage:
```python
solution = Solution()
result = solution.middleNode(head)
