## Class: Solution

This class contains a method `hasCycle()` to determine whether a linked list has a cycle.

### Method: `hasCycle`

Determines whether a linked list has a cycle.

#### Parameters

- `head`: A pointer to the head of the linked list.

#### Returns

- A boolean value indicating whether the linked list has a cycle.

#### Approach

1. **Two Pointers:**
   - Initialize two pointers `slow` and `fast` to the head of the linked list.
   - Traverse the linked list using two pointers:
     - `slow` moves one step at a time.
     - `fast` moves two steps at a time.
   - If there is a cycle, eventually, `fast` will meet `slow` somewhere in the linked list.

2. **Detecting Cycle:**
   - While traversing, if `fast` becomes nullptr or `fast->next` becomes nullptr, it means there is no cycle, and the method returns false.
   - If at any point `fast` becomes equal to `slow`, it indicates a cycle in the linked list, and the method returns true.

#### Time Complexity
- The time complexity of this method is O(N), where N is the number of nodes in the linked list. The method traverses the linked list once with two pointers, `slow` and `fast`.

#### Space Complexity
- The space complexity of this method is O(1) because it only uses a constant amount of extra space for the two pointers `slow` and `fast`.
