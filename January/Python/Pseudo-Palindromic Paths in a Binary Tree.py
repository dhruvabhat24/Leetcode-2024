class Solution:
    def pseudoPalindromicPaths (self, root: Optional[TreeNode]) -> int:
        count = 0
        # root =[2,3,1,3,1,null,1]
        
        stack =[(root, 0)]
        while stack:
            node, path = stack.pop()
            if node is not None:
                path = path ^ (1 << node.val)
                # if it's a leaf, check if the path ispsuedo-palindromic
                if node.left is None and node.right is None:
                    # check if at most one digits has an odd frequency
                    if path & (path - 1) == 0:
                        count += 1
                else:
                    stack.append((node.left, path))
                    stack.append((node.right, path))

        return count
        
