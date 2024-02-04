# Approach:
+ Check if s is shorter than t. If it is, there is no possible solution, and we return an empty string.
+ Create a frequency map of characters in t.
+ Initialize count, start, min_length, and min_start to 0.
+ Traverse the string s using the end pointer.
+ If the current character in s is present in the frequency map, increment the count.
+ Decrement the frequency of the current character in the frequency map.
+ If the count equals the length of t, it means we have found a window that contains all characters of t. Now we try to shrink the window by moving the start pointer forward until the window still contains all the characters of t.
+ If the length of the current window is smaller than the minimum length so far, update the minimum length and the minimum start.
+ Increment the frequency of the character at the start pointer and decrement the count.
+ Return the minimum window or an empty string if no window exists.
# Complexity:
## Time complexity: 
- O(N), where N is the length of the string s. We traverse the string s once.
## Space complexity: 
- O(M), where M is the length of the string t. We create a frequency map of characters in t.
