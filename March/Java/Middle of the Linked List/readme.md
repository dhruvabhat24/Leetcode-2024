## Middle Node with Two Pointers

**Class:** `Solution`

**Method:** `public ListNode middleNode(ListNode head)`

**Purpose:** Finds the middle node of a singly linked list.

**Logic:**

1. **Two Pointers:**
   - **`ListNode slow = head, fast = head;`**: Initializes two pointers:
     - `slow` moves one step at a time.
     - `fast` moves two steps at a time (if possible).

2. **Iterate and Reach the Middle:**
   - **`while (fast != null && fast.next != null)`**: Loops as long as `fast` can move two steps.
     - **`fast = fast.next.next;`**: Moves `fast` two steps ahead.
     - **`slow = slow.next;`**: Moves `slow` one step ahead.

3. **Return Middle Node:**
   - **`return slow;`**: Since `slow` moves half as fast, when `fast` reaches the end (or second-to-last for odd length), `slow` is at the middle node.
