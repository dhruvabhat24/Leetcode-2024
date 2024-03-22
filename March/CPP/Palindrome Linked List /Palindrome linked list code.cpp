/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head,*fast=head,*prev=NULL,*temp;
        while(fast and fast->next){
                fast = fast->next->next;
                temp = slow;
                slow = slow->next;
                temp->next = prev;
                prev = temp;
                
        }
        if(fast != nullptr)
            slow = slow->next;
        while(prev and slow){
            if(slow->val != prev->val) return false;
            prev=prev->next;
            slow=slow->next;
        }
    
    return true;
    }
};
