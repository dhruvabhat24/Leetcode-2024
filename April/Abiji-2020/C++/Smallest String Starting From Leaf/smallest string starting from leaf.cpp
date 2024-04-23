#include <algorithm>
#include <string>
using namespace std;

class Solution {
    string dfs(TreeNode* node, string path, string& smallest) {
        if (!node) return ""; // Base case: if the node is NULL, return an empty string
        path += char('a' + node->val);
        if (!node->left && !node->right) { // If it's a leaf node
            reverse(path.begin(), path.end());
            if (smallest.empty() || smallest > path) {
                smallest = path;
            }
            return smallest; // Return smallest after processing leaf node
        }
        // Recur for left and right subtrees
        dfs(node->left, path, smallest);
        dfs(node->right, path, smallest);
        return smallest; // Return smallest from current subtree
    }
public:
    string smallestFromLeaf(TreeNode* root) {
        string smallest;
        smallest = dfs(root, "", smallest);
        return smallest;
    }
};
