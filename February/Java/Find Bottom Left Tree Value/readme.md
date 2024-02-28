## Explanation of `findBottomLeftValue` in Markdown:

**Class Name:**

* `Solution`

**Method:**

* `public int findBottomLeftValue(TreeNode root)`:
    - Takes the root node of a binary tree as input.
    - Returns the value of the leftmost node at the lowest level (bottom left value).

**Logic:**

1. **Recursive Helper Function:**
    - **`Pair<TreeNode, Integer> helper(TreeNode root, int height)`**:
        - Takes a node and its current level (`height`) as input.
        - Base case: If `root` is null, return a pair with `null` node and `Integer.MIN_VALUE` for level (not a bottom node).
        - Recursively call `helper` on the left (`left`) and right (`right`) subtrees, passing the increased level (`height + 1`).
        - If both `left` and `right` subtrees are empty (null nodes), it's a leaf node and the current node becomes the bottom left (return a pair with `root` and `height`).
        - Otherwise, compare the levels of `left` and `right`:
            - If `right` is deeper (`right.getValue() > left.getValue()`), return the right subtree (potentially bottom left).
            - Otherwise, return the left subtree (the current candidate for bottom left).

2. **Main Function:**
    - **`int findBottomLeftValue(TreeNode root)`**:
        - Calls the `helper` function on the root node with an initial level of 0 (`helper(root, 0)`).
        - Extracts and returns the value (`val`) of the node from the returned pair (`helper(root, 0).getKey().val`).

**Key Points:**

- Uses a recursive helper function to traverse the tree and track the level of each node.
- Employs a `Pair` object to store both the node and its level at each step.
- Compares levels of left and right subtrees to identify the deeper potential bottom left candidate.
- Returns the value of the leftmost node at the lowest level.

**Assumptions:**

- The binary tree is represented using the `TreeNode` class with `val`, `left`, and `right` attributes.
- The tree may be empty or have any valid binary tree structure.
