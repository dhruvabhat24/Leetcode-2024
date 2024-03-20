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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        
        for(int i=1;i<a;i++){
            temp = temp->next;
        }
        ListNode* removing = temp->next;
        while(a!=b){
            removing = removing->next;
            a++;
        }
        temp->next = list2;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = removing->next;
        return list1;
    }
};
