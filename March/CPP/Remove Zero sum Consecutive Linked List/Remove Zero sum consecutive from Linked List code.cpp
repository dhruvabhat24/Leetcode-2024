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
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int> vt;
        ListNode* temp = head;
        while(temp!=nullptr){
            vt.push_back(temp->val);
            temp=temp->next;
        }
        for( int i=0;i<vt.size();i++){
            int sum=0;
            for(int j =i;j<vt.size();j++){
                sum+=vt[j];
                if(sum==0){
                    for(int k=i;k<=j;k++){
                        vt[k]=0;
                    }
                    break;
                }
            }
        }
        ListNode* dum = new ListNode(0);
        ListNode* ans = dum;
        for(int i=0;i<vt.size();i++){
            if(vt[i]!=0){
                dum->next = new ListNode(vt[i]);
                dum = dum->next;
            }
        }
        dum->next = nullptr;
        return ans->next;
    }
};
