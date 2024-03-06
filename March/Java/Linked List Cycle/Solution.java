/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {

    public boolean hasCycle(ListNode head) {

        HashMap<ListNode, Boolean> map=new HashMap<>();

        while(head!=null){

            if(map.containsKey(head)){

                return true;

            }

            map.put(head,true);

            head=head.next;

        }

        return false;

    }

}

        
