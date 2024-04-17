class Solution {
public:
    string ans="|";
    void f(TreeNode* node, string s){
        if (!node) return;
        s=string(1, node->val+'a')+s;
        if (!node->left && !node->right){
            ans=min(ans, s);
        }
        f(node->left, s);
        f(node->right, s);
    }
    string smallestFromLeaf(TreeNode* root) {
        f(root, {});
        return ans;
    }
};
