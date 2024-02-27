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
    pair<int,int> cdanda(TreeNode* root){
        if(root==nullptr){
            return{0,0};
        }
        auto left = cdanda(root->left);
        auto right = cdanda(root->right);
        int curr = max(left.second+right.second,max(left.first,right.first));
        int het = max(left.second,right.second)+1;
        return {curr,het};
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return cdanda(root).first;
    }
};
