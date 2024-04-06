# Problem Analysis
We are given a string `s` containing parentheses. We need to remove the minimum number of parentheses to make the string valid. To make a string valid, each open parenthesis must have a corresponding closing parenthesis, and parentheses must be balanced.

# Approach
We can solve this problem using a recursive approach:
1. Iterate through the string from left to right.
2. If an opening parenthesis is encountered, find its corresponding closing parenthesis using a helper function `startBlock`.
3. Mark all characters between the opening and closing parenthesis for removal.
4. Construct the resulting string by excluding the marked characters.

# Complexity Analysis
- Time Complexity: O(N), where N is the length of the input string `s`. We iterate through the string once.
- Space Complexity: O(N), where N is the length of the input string `s`. We use a string builder to construct the resulting string.
