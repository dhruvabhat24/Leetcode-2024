## Class: Solution

This class contains a method `removeNthFromEnd()` to remove the nth node from the end of a linked list.

### Method: `removeNthFromEnd`

Removes the nth node from the end of a linked list.

#### Parameters

- `head`: A pointer to the head of the linked list.
- `n`: An integer representing the position of the node to be removed from the end of the linked list.

#### Returns

A pointer to the head of the linked list after removing the nth node from the end.

#### Approach

1. **Dummy Node Initialization:**
   - Create a dummy node with value 0 and set its next pointer to the head of the linked list.
   - Initialize two pointers, `first` and `second`, to point to the dummy node initially.

2. **Move `first` Pointer:**
   - Move the `first` pointer forward by `n + 1` steps. This positions the `first` pointer `n` nodes ahead of the `second` pointer.

3. **Move `first` and `second` Pointers Together:**
   - Move both the `first` and `second` pointers simultaneously until the `first` pointer reaches the end of the list (i.e., becomes `nullptr`).

4. **Remove the Nth Node from the End:**
   - Once the `first` pointer reaches the end, the `second` pointer will be pointing to the node just before the nth node from the end.
   - Update the `next` pointer of the node pointed to by `second` to skip the nth node from the end.

5. **Delete Temporarily Allocated Node:**
   - Store the address of the node to be deleted in a temporary pointer `temp`.
   - Update the `next` pointer of `second` to skip the node to be deleted.
   - Delete the node pointed to by `temp` to free up memory.

6. **Return Updated Head:**
   - Return the `next` pointer of the dummy node, which points to the head of the modified linked list.

#### Time Complexity
- The time complexity of this method is O(L), where L is the length of the linked list. We traverse the list twice: once to find the length of the list, and once to reach the node before the nth node from the end.

#### Space Complexity
- The space complexity of this method is O(1) since we only use a constant amount of extra space regardless of the size of the input linked list.
