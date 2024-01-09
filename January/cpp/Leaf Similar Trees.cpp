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
     void findLeaf_dfs(TreeNode* nodeNow, std::vector<int>& nodeList) {
        if (!nodeNow) {
            return;
        }

        if (!nodeNow->left && !nodeNow->right) {
            nodeList.push_back(nodeNow->val);
            return;
        }

        findLeaf_dfs(nodeNow->left, nodeList);
        findLeaf_dfs(nodeNow->right, nodeList);
    }
    public:
 bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        std::vector<int> nodeList_root1, nodeList_root2;
        findLeaf_dfs(root1, nodeList_root1);
        findLeaf_dfs(root2, nodeList_root2);
        return nodeList_root1 == nodeList_root2;
    }

   
};
