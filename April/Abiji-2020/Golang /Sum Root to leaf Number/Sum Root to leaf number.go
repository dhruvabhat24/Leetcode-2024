/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func sumNumbers(root *TreeNode) int {
    return sumroot(root,0)
}

func sumroot(root *TreeNode, sum int) int {
    grat:=0
    if root!=nil{
        sum = sum*10
        sum+=root.Val
        if root.Left == nil && root.Right==nil{
            return sum
        }
        grat+= sumroot(root.Left,sum)+sumroot(root.Right,sum)
    }
    return grat
}
