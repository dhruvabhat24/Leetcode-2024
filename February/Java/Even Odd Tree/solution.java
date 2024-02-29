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
public class Solution {
    public boolean isEvenOddTree(TreeNode root) {
        List<List<Integer>> list = levelOrderTraversal(root);

        // Maintaining a check of even and odd levels
        for (int i = 0; i < list.size(); i++) {
            List<Integer> temp = list.get(i);

            if (i % 2 == 0) {
                if (temp.get(0) % 2 == 0) {
                    return false;
                }
                for (int j = 0; j < temp.size() - 1; j++) {
                    if (temp.get(j) % 2 == 0 || temp.get(j + 1) % 2 == 0 || temp.get(j) >= temp.get(j + 1)) {
                        return false;
                    }
                }
            } else {
                if (temp.get(0) % 2 != 0) {
                    return false;
                }
                for (int j = 0; j < temp.size() - 1; j++) {
                    if (temp.get(j) % 2 != 0 || temp.get(j + 1) % 2 != 0 || temp.get(j) <= temp.get(j + 1)) {
                        return false;
                    }
                }
            }
        }

        return true;
    }

    private List<List<Integer>> levelOrderTraversal(TreeNode root) {
        List<List<Integer>> result = new ArrayList<>();
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);

        while (!q.isEmpty()) {
            List<Integer> ans = new ArrayList<>();
            int level = q.size();
            for (int i = 0; i < level; i++) {
                TreeNode node = q.poll();
                ans.add(node.val);
                if (node.left != null) q.offer(node.left);
                if (node.right != null) q.offer(node.right);
            }
            result.add(ans);
        }

        return result;
    }
}
