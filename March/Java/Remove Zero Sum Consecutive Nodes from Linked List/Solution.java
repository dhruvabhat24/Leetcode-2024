class Solution {
   public ListNode removeZeroSumSublists(ListNode head) {
    int sum = 0;
    ListNode dm = new ListNode(0);
    dm.next = head;

    Map<Integer, ListNode> mp = new HashMap<>();
    mp.put(0, dm);


    for (ListNode i = dm; i != null; i = i.next) {
        sum += i.val;
        mp.put(sum, i);
    }


    sum = 0;
    for (ListNode i = dm; i != null; i = i.next) {
        sum += i.val;
        i.next = mp.get( sum ).next;
    }
    
    return dm.next;
    }
}
