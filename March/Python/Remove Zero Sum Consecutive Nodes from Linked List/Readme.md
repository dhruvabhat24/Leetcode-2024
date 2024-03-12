# Remove Zero Sum Sublists

The given Python code defines a solution for removing zero-sum sublists from a singly-linked list.

## ListNode Class
The code defines a ListNode class representing a node in a singly-linked list. Each node has a value (`val`) and a reference to the next node (`next`).

## Solution Class
The `Solution` class contains a method `removeZeroSumSublists`, which takes a head node of a linked list as input and returns the modified linked list after removing zero-sum sublists.

## Algorithm
1. The code initializes a dummy node and sets the current node (`curr`) to the dummy node.
2. It uses a prefix sum approach to track the cumulative sum of values in the linked list.
3. An ordered dictionary (`seen`) is used to store the prefix sums along with their corresponding nodes.
4. While traversing the linked list, the code updates the prefix sum and checks if the current prefix sum is already in the dictionary.
5. If the prefix sum is not present, it adds the sum and the current node to the dictionary.
6. If the prefix sum is already in the dictionary, it means a zero-sum sublist is found. The code then removes the sublist by updating the next reference of the node at the corresponding prefix sum and clears entries from the dictionary until the last entry is equal to the prefix sum.
7. The traversal continues until the end of the linked list.
8. The modified linked list is returned.

This algorithm efficiently removes zero-sum sublists in linear time complexity, making use of an ordered dictionary to keep track of prefix sums and their corresponding nodes.
