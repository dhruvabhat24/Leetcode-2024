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
class Solution {
    int result;
public:
    bool isPowerOfTwo(int n){
        return n == 0 ? true : !(n&(n-1));
    }

    void dfs(TreeNode* root, int value){
        if(root == 0)return;

        value ^= 1 << root->val;

        if(root->left == root->right){
            result += static_cast<int>(isPowerOfTwo(value));
        }
        else {
            dfs(root->left, value);
            dfs(root->right, value);
        }
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        result = 0;
        dfs(root, 0);
        root->left = root->right = 0;
        return result;
    }
};
