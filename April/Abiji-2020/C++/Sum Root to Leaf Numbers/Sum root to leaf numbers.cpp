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
    int sumroot(TreeNode* root,int sum){
        int grat =0;
        if(root!=nullptr){
             sum = sum*10;
                sum+=root->val;
            if(root->left == nullptr && root->right==nullptr){
               
                return sum;
            }
            grat+=sumroot(root->left, sum)+sumroot(root->right,sum);
        }
        return grat;
        
    }
public:
    int sumNumbers(TreeNode* root) {
        return sumroot(root,0);
    }
};
