/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


 int depth(struct TreeNode* root) {
   if (root == NULL) {  // Base case: empty tree has depth 0
       return 0;
   } else {
       // Recursively calculate depths of left and right subtrees
       int leftDepth = depth(root->left);
       int rightDepth = depth(root->right);

       // Return 1 (for the current level) plus the larger depth
       return 1 + fmax(leftDepth, rightDepth);
   }
}

// Checks if a binary tree is an Even-Odd tree.
bool isEvenOddTree(struct TreeNode* root) {
   int treeDepth = depth(root);  // Find the tree's depth

   // Allocate two queues for level order traversal (potentially overkill)
   struct TreeNode** queue0 = malloc(50000 * sizeof(struct TreeNode*));
   struct TreeNode** queue1 = malloc(50000 * sizeof(struct TreeNode*));
   int idx0 = 0, idx1 = 0;  // Indices for the queues

   queue0[idx0] = root;
   idx0 = 1;  // Enqueue the root node and increment index

   while (idx0 || idx1) {
       // Process levels with odd indices
       if (idx0) {
           for (int i = 0; i < idx0; i++) {
               if (i == 0) {
                   // First element of odd level must be odd
                   if (queue0[i]->val % 2 == 0) return false;
               } else {
                   // Subsequent elements must be odd and in increasing order
                   if (queue0[i]->val % 2 == 0 || queue0[i]->val <= queue0[i - 1]->val) return false;
               }

               // Enqueue children in queue1 for the next level
               if (queue0[i]->left) {
                   queue1[idx1] = queue0[i]->left;
                   idx1++;
               }
               if (queue0[i]->right) {
                   queue1[idx1] = queue0[i]->right;
                   idx1++;
               }
           }
           idx0 = 0;  // Reset index for queue0
       }  else{
            for(int i = 0; i < idx1; i++){
                if(i == 0){ 
                    if(queue1[i]->val%2 == 1)
                        return false;
                }
                else{
                    if(queue1[i]->val %2 == 1 || queue1[i]->val >= queue1[i-1]->val)
                        return false;
                }
                if(queue1[i]->left){
                    queue0[idx0] = queue1[i]->left;
                    idx0++;
                }
                if(queue1[i]->right){
                    queue0[idx0] = queue1[i]->right;
                    idx0++;
                }
            }
            idx1 = 0;
        }
    }
   return true;  // Tree meets Even-Odd tree criteria
}

