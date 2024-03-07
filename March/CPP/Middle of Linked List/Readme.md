## Class: Solution

This class contains a method `middleNode()` to find the middle node of a given linked list.

### Method: `middleNode`

Finds the middle node of a given linked list.

#### Parameters

- `head`: A pointer to the head node of the linked list.

#### Returns

A pointer to the middle node of the linked list.

#### Approach

1. **Count Length:**
   - Traverse the linked list to count the number of nodes in the list.
   - Calculate the length of the linked list.
   
2. **Find Middle Node:**
   - Divide the length by 2 to get the position of the middle node.
   - Traverse the linked list again up to the middle position.
   - Return the node at the middle position.

#### Time Complexity
- The time complexity of this method is O(n), where n is the number of nodes in the linked list. The method traverses the linked list twice: once to count the number of nodes and once to find the middle node.

#### Space Complexity
- The space complexity of this method is O(1) because it uses only a constant amount of extra space regardless of the size of the linked list.
