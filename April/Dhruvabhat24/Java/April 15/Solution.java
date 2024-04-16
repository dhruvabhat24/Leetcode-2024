class Solution {
    public int sumTree(TreeNode root,int sum){
        if(root==null) return 0;
        sum=sum*10+root.val;
        if(root.left==null && root.right==null) return sum;
        return sumTree(root.left,sum)+sumTree(root.right,sum);
    }
    public int sumNumbers(TreeNode root) {
                return sumTree(root,0);
    }

}
