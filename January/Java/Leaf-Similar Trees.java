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
    List<Integer> l=new ArrayList<>();
    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
       List<Integer> x=new ArrayList<>();
       int i=0;
       Leafs(root1);
       x.addAll(l);
       l.clear();
       l=Leafs(root2);
       if(l.size()!=x.size())
           return false;  
       while(i<x.size()){
        if(x.get(i)!=l.get(i))
           return false;
        i++;
       }    
       return true;
    }       
    public List<Integer> Leafs(TreeNode root){   
        if(root==null)
           return l;
        Leafs(root.left);
        if(root.left==null&&root.right==null)
              l.add(root.val);    
        Leafs(root.right);
        return l;         
    }
}
