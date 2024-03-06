## Explanation of `hasCycle` in Markdown:

**Class:** `Solution`

**Method:** `public boolean hasCycle(ListNode head)`

**Purpose:** Determines if a linked list contains a cycle.

**Logic:**

1. **Hash Table Approach:**
   - **`HashMap<ListNode, Boolean> map = new HashMap<>();`**: Creates a hash table `map` to store visited nodes. The key is the `ListNode` itself, and the value is a boolean flag indicating if the node has been encountered before.

2. **Iterative Traversal:**
   - **`while (head != null)`**: Iterates through the linked list as long as the current node (`head`) is not null.
     - **`if (map.containsKey(head))`**: Checks if the current node (`head`) is already present as a key in the `map`. This indicates a cycle, as a node cannot be visited twice in a linear linked list. If a cycle exists, the function returns `true`.
     - **`map.put(head, true);`**: If the node is not found in the `map`, it is added to the `map` with a value of `true`, signifying that it has been visited now.
     - **`head = head.next;`**: Moves the `head` pointer to the next node in the list for further traversal.

3. **Return Result:**
   - **`return false;`**: If the loop completes without encountering a cycle (no node is found in the `map` before visiting it), the function returns `false`, indicating the absence of a cycle in the linked list.

**Key Points:**

- Leverages a hash table to efficiently keep track of visited nodes and detect cycles.
- Employs a boolean flag in the `map` to distinguish between first and subsequent visits of the same node.

**Assumptions:**

- The linked list is represented using the `ListNode` class with `val` and `next` attributes.

**Time Complexity:**

- O(n) in the average and best cases, where `n` is the number of nodes in the list. This is because the loop iterates through the list once in the absence of a cycle.
- O(n) in the worst case, where the list contains a cycle, and the loop continues indefinitely until the memory limit is reached.

**Space Complexity:**

- O(n) in the worst case, as the hash table can potentially store all nodes in the list if it contains a cycle.
- O(1) in the best case, where the list is empty or has no cycle, and the hash table remains empty.
