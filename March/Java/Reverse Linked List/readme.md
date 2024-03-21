This Java code presents a solution to reverse a singly-linked list. Let's delve into a detailed explanation along with an example implementation:

1. **Definition of ListNode:** The code includes the definition of the `ListNode` class, which represents a node in a singly-linked list. It includes constructors for creating nodes with and without values, as well as a reference to the next node.

2. **Method Implementation - `reverseList`:** The `reverseList` method takes a `ListNode` `head` as input and returns the head of the reversed list. It reverses the given linked list iteratively using a three-pointer approach.

3. **Initialization:** Inside the method, two `ListNode` pointers `curr` and `prev` are initialized. `curr` initially points to the `head` of the list, and `prev` is set to `null` since it will eventually become the new head of the reversed list.

4. **Reversing the List:** The algorithm iterates through the list using the `curr` pointer. In each iteration:
    - It temporarily stores the next node of `curr` in a variable `temp`.
    - It updates the `next` pointer of `curr` to point to the previous node `prev`, effectively reversing the direction of the pointer.
    - It updates `prev` to point to the current node `curr`.
    - It moves `curr` to the next node (`temp`) for the next iteration.

5. **Returning the Reversed List:** Once the entire list is traversed, `prev` points to the new head of the reversed list, so it is returned.

Let's demonstrate the algorithm with an example:

Suppose we have a linked list: `1 -> 2 -> 3 -> 4 -> 5`.

- **Initialization:**
    - `head` points to node 1.
    - `curr` and `prev` are initially `null`.

- **Iteration 1:**
    - `curr` points to node 1.
    - `temp` stores the next node, i.e., node 2.
    - `curr.next` is set to `prev`, which is `null`.
    - `prev` is updated to `curr`.
    - `curr` moves to the next node, i.e., node 2.

- **Iteration 2:**
    - `curr` points to node 2.
    - `temp` stores the next node, i.e., node 3.
    - `curr.next` is set to `prev`, which is node 1.
    - `prev` is updated to `curr`.
    - `curr` moves to the next node, i.e., node 3.

- **Iterations 3-5:** Repeat the above steps until the end of the list is reached.

Finally, the reversed list becomes `5 -> 4 -> 3 -> 2 -> 1`.

This detailed explanation provides insights into how the algorithm reverses a singly-linked list and demonstrates its execution with an example.
