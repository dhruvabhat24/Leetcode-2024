# Intuition 
 We can iterate through one array and store the counts of each element in a hash map. Then, we iterate through the second array and check if each element exists in the hash map. If it does, we add it to the result vector and remove it from the hash map.

# Approach:

Create a hash map to store the counts of each element in nums1.<br> 2.
Iterate through nums2.<br> 3.
If the current element exists in the hash map, add it to the result vector and remove it from the hash map.
