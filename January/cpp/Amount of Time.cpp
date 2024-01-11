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
public:
    // Function to calculate the amount of time based on the root and starting value
    int amountOfTime(TreeNode* root, int start) {
        std::unordered_map<TreeNode*, TreeNode*> mpp;
        TreeNode* target = bfsToMapParents(root, mpp, start);

        return findMaxDistance(mpp, target);
    }

private:
    // Function to find the maximum distance using BFS and a map of parents
    int findMaxDistance(std::unordered_map<TreeNode*, TreeNode*>& mpp, TreeNode* target) {
        std::queue<TreeNode*> q;
        q.push(target);
        std::unordered_map<TreeNode*, int> vis;
        vis[target] = 1;
        int maxi = 0;

        while (!q.empty()) {
            int sz = q.size();
            int fl = 0;

            for (int i = 0; i < sz; i++) {
                TreeNode* node = q.front();
                q.pop();

                // Check left child
                if (node->left != nullptr && vis[node->left] == 0) {
                    fl = 1;
                    vis[node->left] = 1;
                    q.push(node->left);
                }

                // Check right child
                if (node->right != nullptr && vis[node->right] == 0) {
                    fl = 1;
                    vis[node->right] = 1;
                    q.push(node->right);
                }

                // Check parent
                if (mpp[node] != nullptr && vis[mpp[node]] == 0) {
                    fl = 1;
                    vis[mpp[node]] = 1;
                    q.push(mpp[node]);
                }
            }

            if (fl == 1)
                maxi++;
        }

        return maxi;
    }

    // Function to perform BFS and map parents
    TreeNode* bfsToMapParents(TreeNode* root, std::unordered_map<TreeNode*, TreeNode*>& mpp, int start) {
        std::queue<TreeNode*> q;
        q.push(root);
        TreeNode* res = nullptr;

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            // Check if the current node is the starting node
            if (node->val == start)
                res = node;

            // Map left child to its parent
            if (node->left != nullptr) {
                mpp[node->left] = node;
                q.push(node->left);
            }

            // Map right child to its parent
            if (node->right != nullptr) {
                mpp[node->right] = node;
                q.push(node->right);
            }
        }

        return res;
    }
};
