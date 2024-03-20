/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
// if(list1==NULL)
        // {
        //     return list2;
        // }
        // return NULL
        int c=0;
        struct ListNode * temp=list1;
        struct ListNode * t1=NULL,*t2=NULL;
        while(temp)
        {
            
            if(c==a-1)
            {
                t1=temp;
            }
            temp=temp->next;
            c++;
            if (c==b)
            {
                t2=temp;
                break;
            }
        }
        t1->next=list2;
        temp=list2;
    while(temp->next)
        {
            temp=temp->next;
        }
        temp->next=t2->next;
        return list1;
}

