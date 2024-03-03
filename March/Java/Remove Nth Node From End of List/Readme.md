## Explanation of `removeNthFromEnd` in Markdown:

**Class:** `Solution`

**Method:** `public ListNode removeNthFromEnd(ListNode head, int n)`

**Purpose:** Removes the **nth node from the end** of a singly linked list and returns the modified list.

**Logic:**

1. **Two-Pointer Approach:**
   - **`ListNode fast = head, slow = head;`**: Initializes two pointers, `fast` and `slow`, both starting at the head of the list.

2. **Handle Empty List or n exceeding list length:**
   - **`if (fast == null) return head.next;`**: Checks if `fast` becomes null after moving `n` steps (using a separate loop is not shown here). This indicates an empty list or `n` exceeding the list length. In this case, we return `head.next`, effectively removing the head node.

3. **Move `fast` pointer n steps ahead:**
   - **`for (int i = 0; i < n; i++) fast = fast.next;`**: Moves the `fast` pointer `n` nodes ahead to establish a distance from `slow`.

4. **Iterate to the node before the target:**
   - **`while (fast.next != null) { fast = fast.next; slow = slow.next; }`**:
     - Iterates as long as `fast.next` is not null.
     - Advances both `fast` and `slow` by one position in each iteration.
     - This ensures `slow` reaches the node **before** the target node to be removed.

5. **Remove the target node:**
   - **`slow.next = slow.next.next;`**: Since `slow` is now positioned before the target node, updates its `next` pointer to skip the target node and point to the node **two positions ahead** (target node's next node).

6. **Return the modified list:**
   - **`return head;`**: Returns the head of the modified list, which might have been altered by removing the head node in step 2.

**Key Points:**

- Employs two pointers to efficiently locate the node to remove based on relative positions.
- Effectively handles edge cases like empty lists or invalid `n` values.

**Assumptions:**

- The linked list is represented using the `ListNode` class with `val` and `next` attributes.
- The value of `n` can be any non-negative integer.

**Time Complexity:**

- O(n) in the average and best cases, as `fast` traverses up to `n` nodes in the initial step.
- O(1) in the worst case when `n` is equal to the list length (removing the head node).

**Space Complexity:**

- O(1) as it uses constant extra space for the two pointers.
