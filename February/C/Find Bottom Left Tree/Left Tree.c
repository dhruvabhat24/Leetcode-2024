/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int findBottomLeftValue(struct TreeNode* root) {
    struct TreeNode** queue = (struct TreeNode **)malloc(sizeof(struct TreeNode) * 10001);
    *queue = root;
    int idx = 0, queue_size = 1, incr = 0;
    int *depth = (int *)malloc(sizeof(int) * 10001);
    int depth_idx = 0;

    while(idx < queue_size) {
        struct TreeNode* node = *(queue + idx);
        *(depth + depth_idx) = node->val;
        depth_idx++;
        if(!!node->left) {
            *(queue + queue_size + incr) = node->left;
            incr++;
        }

        if(!!node->right) {
            *(queue + queue_size + incr) = node->right;
            incr++;
        }

        if(idx + 1 == queue_size) {
            if(incr > 0) {
                depth_idx = 0;
            }
            queue_size += incr;
            incr = 0;
        }

        idx++;
    }

    return *depth;
}


