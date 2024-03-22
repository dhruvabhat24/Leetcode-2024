/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        ListNode temp=head;
        //Pushing elements into the stack
        Stack<Integer> st=new Stack<>();
        while(temp!=null)
        {
            st.push(temp.val);
            temp=temp.next;
        }
        //checking the stack ele and the LL node values are equaal or not
        temp=head;
        while(temp!=null)
        {
            if(st.pop()==temp.val)
            {
                temp=temp.next;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
}
