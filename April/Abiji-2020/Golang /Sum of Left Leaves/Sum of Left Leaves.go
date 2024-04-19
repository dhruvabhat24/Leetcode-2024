/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func sumOfLeftLeaves(root *TreeNode) int {

    if root == nil{
        return 0
    }
    sum:= 0
    if (root.Left!=nil && root.Left.Left==nil && root.Left.Right == nil){
        sum+=root.Left.Val
    }
    sum+=sumOfLeftLeaves(root.Left)+sumOfLeftLeaves(root.Right)
    return sum
    
}
