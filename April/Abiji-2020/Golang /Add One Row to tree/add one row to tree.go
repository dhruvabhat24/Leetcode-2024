/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func solve(t *TreeNode, val, depth int) {
    if t == nil {
        return
    }
    
    if depth == 2 {
        temp := &TreeNode{Val: val}
        temp.Left = t.Left
        t.Left = temp
        
        temp2 := &TreeNode{Val: val}
        temp2.Right = t.Right
        t.Right = temp2
        
        return
    }
    
    solve(t.Left, val, depth-1)
    solve(t.Right, val, depth-1)
}

func addOneRow(root *TreeNode, val, depth int) *TreeNode {
    if depth == 1 {
        t := &TreeNode{Val: val}
        t.Left = root
        return t
    }
    
    solve(root, val, depth)
    return root
}
