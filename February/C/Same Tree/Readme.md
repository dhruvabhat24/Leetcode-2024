# Objective: Determine if two binary trees are identical.
Explanation -1

Null Check:

Return true if both nodes (p and q) are null.
Return false if only one node is null.
Recursive Check for Node Values:

Return the result of:
Comparing the values of current nodes (p->val and q->val).
Recursively checking left subtrees (p->left and q->left).
Recursively checking right subtrees (p->right and q->right).
