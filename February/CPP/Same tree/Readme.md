# Same Tree

## Class: Solution

This class contains a method `isSameTree()` to determine whether two binary trees are identical.

### Method: `isSameTree`

Checks whether two binary trees are identical.

#### Parameters

- `p`: Pointer to the root of the first binary tree.
- `q`: Pointer to the root of the second binary tree.

#### Returns

- `true` if the binary trees rooted at `p` and `q` are identical.
- `false` otherwise.

#### Description

- If both `p` and `q` are `nullptr`, indicating empty trees, the function returns `true`, as empty trees are considered identical.
- If one of `p` or `q` is `nullptr` while the other is not, the function returns `false`, as trees with different structures are not identical.
- If both `p` and `q` are not `nullptr`, the function checks if their values (`p->val` and `q->val`) are equal:
  - If the values are equal, it recursively compares the left subtrees (`p->left` and `q->left`) and the right subtrees (`p->right` and `q->right`) to determine their identity.
  - If any of the recursive calls return `false`, or if the values of the current nodes are not equal, the function returns `false`, indicating that the trees are not identical.
- If all checks pass and the function does not return `false`, it returns `true`, indicating that the binary trees rooted at `p` and `q` are identical.

The `isSameTree()` method effectively determines whether two binary trees are identical by recursively comparing their node values and structures.

