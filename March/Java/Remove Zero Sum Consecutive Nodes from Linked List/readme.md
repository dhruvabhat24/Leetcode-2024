1. **removeZeroSumSublists Method:**
   - The `removeZeroSumSublists` method takes a ListNode `head` as input and returns a modified list with zero-sum sublists removed.

2. **Initialization:**
   - Initialize a variable `sum` to keep track of the running sum of the list.
   - Create a dummy node `dm` with value 0 and set its next node to the input `head`.
   - Initialize a HashMap `mp` to store the running sum as keys and corresponding nodes as values. The initial entry is (0, dm), where `dm` points to the head of the list.

3. **Building the Running Sum Map:**
   - Iterate through the list starting from the dummy node `dm`.
   - Calculate the running sum by adding the current node's value to the previous sum.
   - Store the running sum and its corresponding node in the map.

4. **Removing Zero-Sum Sublists:**
   - Reset the `sum` variable to 0.
   - Iterate through the list again, starting from the dummy node `dm`.
   - Calculate the running sum as before.
   - Update the `next` pointer of the current node to skip nodes with the same running sum, effectively removing zero-sum sublists from the list.

5. **Return Result:**
   - Return the modified list starting from the next node of the dummy node `dm`.

