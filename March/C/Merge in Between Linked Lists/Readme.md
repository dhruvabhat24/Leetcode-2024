# Approach
For this problem there are three stages:
1.  Traverse the list1 and point a-1 as flag1 and b as flag2 nodes
2.  Now add list 2 to the flag1->next(a-1)
3.  Now Traverse to list2 end and add list2 end->next to flag2
4. now return the list1.....

## Complexity
### Time complexity: O(n**2)
### Space complexity:O(n)
