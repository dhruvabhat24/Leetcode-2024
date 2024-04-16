/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    void dfs(TreeNode* root, int val, int depth, int level){
        if (!root) return;
        if (level<depth-1){
            dfs(root->left, val, depth, level+1);
            dfs(root->right, val, depth, level+1);
        }
        else{
            TreeNode* ptr=root->left;
            root->left=new TreeNode(val);
            root->left->left=ptr;

            ptr=root->right;
            root->right=new TreeNode(val);
            root->right->right=ptr;
        }

    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth==1){
            TreeNode* ptr=new TreeNode(val);
            ptr->left=root;
            return ptr;
        }
        dfs(root, val, depth, 1);
        return root;
    }
};
