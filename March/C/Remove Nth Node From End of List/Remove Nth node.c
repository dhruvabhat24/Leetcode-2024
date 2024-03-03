/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode*q1=head,*q2=head;
  while(n--)
  {
      q1=q1->next;
  }
  if(q1==NULL)
  {
      return q2->next;
  }
  while(q1->next!=NULL)
  {
      q1=q1->next;
      q2=q2->next;
  }
  q2->next=q2->next->next;
  return head;
}

