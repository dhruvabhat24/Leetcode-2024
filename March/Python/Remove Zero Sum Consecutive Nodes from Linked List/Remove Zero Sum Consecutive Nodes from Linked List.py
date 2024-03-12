# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeZeroSumSublists(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = dummy =ListNode(0)
        dummy.next = head
        prefix = 0
        seen = collections.OrderedDict()
        while curr :
            prefix += curr.val
            if prefix not in  seen :
                seen[prefix] = curr
            else:
                node = seen[prefix]
                node.next = curr.next
                while list(seen.keys())[-1] != prefix:
                    seen.popitem()
            curr = curr.next
        return dummy.next
