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
    int sum =0;
public:

    int rangeSumBST(TreeNode* root, int low, int high) {
    if (root == NULL){
        return 0;
    }
    else{
        rangeSumBST(root->left,low,high);
        int s = root->val;

        if(s>=low && s<=high){
            sum+=s;
        }
        rangeSumBST(root->right,low,high);
    }
    return sum;
    }
};
