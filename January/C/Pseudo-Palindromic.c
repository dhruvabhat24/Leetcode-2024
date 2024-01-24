/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void preorder(struct TreeNode *node, int path, int *palindromePaths) {
    if(node) {
        // update frequency for this node->val digit in path
        path ^= (1 << node->val);
        if(!node->left && !node->right) {
            if((path & (path - 1)) == 0) {
                (*palindromePaths)++;
            }
        }
        preorder(node->left, path, palindromePaths);
        preorder(node->right, path, palindromePaths);
    }
}
