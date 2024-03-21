/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *pre = NULL, *curr = head, *newNode = NULL;
    while (curr != NULL) {
        newNode = curr->next;
        curr->next = pre;
        pre = curr;
        curr = newNode;
    }
    head = pre;
    return head;
}

