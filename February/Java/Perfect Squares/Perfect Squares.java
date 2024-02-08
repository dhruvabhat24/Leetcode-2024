class Solution{
    boolean check(Node root){
         if (root == null)
            return true;
        Queue<Node>q=new LinkedList<>();
        q.add(root);
        int height = 0;
        int leafheight = -1;
        while (q.isEmpty()==false) {
            int size = q.size();
            height+=1;
            while (size > 0) {
                size--;
                Node curr = q.poll();
                if (curr.left == null && curr.right == null) {
                    if (leafheight == -1) {
                        leafheight = height;
                    } else if (leafheight != height) {
                        return false;
                    }
                }
                if (curr.left != null)
                    q.add(curr.left);
                if (curr.right != null)
                    q.add(curr.right);
            }
        }
        return true;
    }
}

