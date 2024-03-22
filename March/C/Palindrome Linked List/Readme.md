# Approach
1. We will use the slow and fast pointer technique to find the middle of the linked list.
2. The slow pointer will move one step at a time, while the fast pointer will move two steps at a time.
3. When the fast pointer reaches the end of the list, the slow pointer will be at the middle.
4. After finding the middle, we will reverse the second half of the linked list.
5. Finally, we will compare the elements of the first half with the reversed second half.
6. If all elements match, the linked list is a palindrome.

# Complexity

### Time Complexity: O(n) Where n is the Number of Nodes in Linked List.
### Space Complexity: O(1)
