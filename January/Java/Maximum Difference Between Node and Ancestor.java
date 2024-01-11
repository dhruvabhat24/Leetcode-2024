/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int maxAncestorDiff(TreeNode root) {
        return dfs(root, root.val, root.val);
    }

    public int dfs(TreeNode node, int currmax, int currmin) {
        if (node == null) {
            return currmax - currmin;
        }
        currmax = Math.max(currmax, node.val);
        currmin = Math.min(currmin, node.val);
        int left = dfs(node.left, currmax, currmin);
        int right = dfs(node.right, currmax, currmin);
        return Math.max(left, right);
    }
}
