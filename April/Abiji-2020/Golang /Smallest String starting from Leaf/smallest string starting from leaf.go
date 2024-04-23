/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func smallestFromLeaf(root *TreeNode) string {
    if root == nil {
        return ""
    }
    
    // Define a helper function for DFS traversal
    var dfs func(node *TreeNode, path string, smallest *string)
    dfs = func(node *TreeNode, path string, smallest *string) {
        if node == nil {
            return
        }
        
        // Concatenate the current character to the path
        path = string('a' + byte(node.Val)) + path
        
        // If it's a leaf node, compare the path with the smallest string found so far
        if node.Left == nil && node.Right == nil {
            if *smallest == "" || path < *smallest {
                *smallest = path
            }
            return
        }
        
        // Recur for left and right subtrees
        dfs(node.Left, path, smallest)
        dfs(node.Right, path, smallest)
    }
    
    // Initialize the smallest string as an empty string
    smallest := ""
    
    // Start DFS traversal from the root node with an empty path
    dfs(root, "", &smallest)
    
    return smallest
}
