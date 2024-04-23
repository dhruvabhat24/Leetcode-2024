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
    void addnew(TreeNode* root, int val, int depth){
        if(root==nullptr) return;
       
        if(depth==2){
            
               TreeNode* rightNode = new TreeNode(val,nullptr,root->right);
               TreeNode* leftNode = new TreeNode(val, root->left,nullptr);
               root->right = rightNode;
               root->left = leftNode; 
            
            return;
        }
        addnew(root->left,val,depth-1);
        addnew(root->right,val,depth-1);
    }
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
         if(depth==1){
            TreeNode* base = new TreeNode(val,root,nullptr);
            return base;
        }
        addnew(root,val,depth);
        return root;
    }
};
