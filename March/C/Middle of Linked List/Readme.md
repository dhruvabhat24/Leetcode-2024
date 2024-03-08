# Approach
1. Initialization: Start with two pointers, fast and slow, both pointing to the head of the list.

2. Traversal: Move the fast pointer two steps at a time and the slow pointer one step at a time. This ensures that when the fast pointer reaches the end of the list, the slow pointer will be at the middle node.

3. Find the Middle Node: After traversal, the slow pointer will be at the middle node of the list.

4. Edge Case Handling: Check if the list is empty or contains only one node. In such cases, the middle node is the head itself.

5. Return the node pointed to by the slow pointer as the middle node.
