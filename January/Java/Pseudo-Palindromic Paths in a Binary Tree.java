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
    static Map<Integer,Integer> map;
    static int count=0;
    public int pseudoPalindromicPaths (TreeNode root) {
        map=new HashMap<>();
        count=0;
        dfs(root);
        return count;
    }
    public void dfs(TreeNode root)
    {
        if(root==null)return;
        map.put(root.val,map.getOrDefault(root.val,0)+1);
        if(root.left==null&&root.right==null)
        {
        int c=0;
        for(int i:map.keySet())
            if(map.get(i)%2 !=0 ) c++;
        if(c<=1)count++;
        map.put(root.val,map.get(root.val)-1);
        return ;
        }
        dfs(root.left);
        dfs(root.right);
        map.put(root.val,map.get(root.val)-1);
    } 
}
