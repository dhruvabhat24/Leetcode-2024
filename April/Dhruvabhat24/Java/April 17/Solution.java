class Solution {
    String smallestString = null;
    
    public String smallestFromLeaf(TreeNode root) {
        dfs(root, new StringBuilder());
        return smallestString;
    }
    
    private void dfs(TreeNode node, StringBuilder currentString) {
        if (node == null) {
            return;
        }
        
        currentString.insert(0, (char) ('a' + node.val));
        
        if (node.left == null && node.right == null) {
            updateSmallestString(currentString.toString());
        } else {
            dfs(node.left, currentString);
            dfs(node.right, currentString);
        }
        
        currentString.deleteCharAt(0);
    }
    
    private void updateSmallestString(String currentString) {
        if (smallestString == null || currentString.compareTo(smallestString) < 0) {
            smallestString = currentString;
        }
    }
}
