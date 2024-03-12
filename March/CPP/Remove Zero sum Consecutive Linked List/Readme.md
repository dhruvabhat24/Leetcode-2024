## Class: Solution

This class contains a method `removeZeroSumSublists()` to remove contiguous sublists from a singly-linked list whose sum equals zero.

### Method: `removeZeroSumSublists`

Removes contiguous sublists from a singly-linked list whose sum equals zero.

#### Parameters

- `head`: A pointer to the head of the singly-linked list.

#### Returns

A pointer to the head of the modified singly-linked list after removing the zero-sum contiguous sublists.

#### Approach

1. **Convert List to Vector:**
   - Traverse the given linked list and store the values in a vector `vt`.
2. **Identify and Mark Zero-Sum Sublists:**
   - Iterate through each element of the vector `vt`.
   - For each element `vt[i]`, calculate the sum of elements from `vt[i]` to `vt[j]`, where `j` ranges from `i` to the end of the vector.
   - If the sum equals zero, mark all elements from `vt[i]` to `vt[j]` as zero.
3. **Create Modified List:**
   - Create a dummy node `dum` to serve as the head of the modified list.
   - Iterate through the vector `vt`.
   - For each non-zero element `vt[i]`, create a new node with value `vt[i]` and append it to the modified list.
4. **Return Result:**
   - Return the next pointer of the dummy node, which points to the head of the modified list.

#### Time Complexity
- Let N be the number of nodes in the linked list.
- Converting the linked list to a vector takes O(N) time.
- Identifying and marking zero-sum sublists takes O(N^2) time in the worst case.
- Creating the modified list takes O(N) time.
- Therefore, the overall time complexity is O(N^2).

#### Space Complexity
- The space complexity of this method is O(N), where N is the number of nodes in the linked list.
  - Additional space is used to store the vector `vt`.
  - Creating the modified list also requires O(N) space.
  - The space used is proportional to the size of the input linked list.
