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
    int diff(TreeNode* root,int currmin,int currmax){
        if (root==NULL){
            return currmax-currmin;
        }
        currmax = max(currmax,root->val);
        currmin = min(currmin,root->val);
        int left = diff(root->left, currmin,currmax);
        int right = diff(root->right,currmin,currmax);
        return max(left,right);
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        return diff(root,root->val,root->val);
    }
};
