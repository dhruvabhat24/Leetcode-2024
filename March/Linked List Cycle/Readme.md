# Approach:

1.Use two pointers, slow and fast, initially both pointing to the head of the linked list.<br>
2.Move slow pointer one step at a time and fast pointer two steps at a time.<br>
3.If there is a cycle, eventually the fast pointer will meet the slow pointer within the cycle.<br>
4.If there is no cycle, the fast pointer will reach the end of the list.<br>
5.Return true if fast and slow pointers meet, indicating the presence of a cycle, otherwise return false.<br>
