# Approach
Fistly we take two pointer q1 and q2 and assign these value is head. 
then we start while loop and move to q1 in n times
if we delete first node then use  <br> if(q1==NULL) <br> 
{   <br> 
return q2->next;  <br> 
}.  <br> 
and if we delete mid node we do this  <br> 
while(q1->next!=NULL)  <br> 
{  <br> 
q1=q1->next;  <br> 
q2=q2->next;  <br> 
}   <br> 
q2->next=q2->next->next;  <br> 
