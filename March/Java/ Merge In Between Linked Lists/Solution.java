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
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        ListNode aListNode = null, bListNode = null, dummyNode = null;
        dummyNode = new ListNode(0, list1);
        b++;
        while(dummyNode.next != null) {
            a--;
            b--;
            dummyNode = dummyNode.next;
            if(a==0){
                aListNode = dummyNode;
            }
            if(b==0) {
                bListNode = dummyNode;
                break;
            }
        }
        if(aListNode == null) aListNode = list1;
        aListNode.next = list2;
        // find tail of list2
        while(list2.next!=null){
            list2 = list2.next;
        }
        list2.next=bListNode.next;
        return list1;
    }
}
