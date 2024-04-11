# Problem Description

Given a non-negative integer num represented as a string, remove k digits from the number so that the new number is the smallest possible.

# Approach

The approach involves using a stack to keep track of the digits in the number. We iterate through each digit of the number and compare it with the top element of the stack. If the current digit is smaller and there are still digits to remove (k > 0), we pop elements from the stack until we find a smaller digit or until k becomes zero. After processing all digits, we remove any remaining digits from the end of the stack to satisfy the requirement of removing k digits. Finally, we construct the resulting string from the stack, remove any leading zeros, and return the result.

# Intuition

The intuition behind this approach is to remove digits that make the number larger. By iteratively comparing each digit with the top element of the stack, we ensure that the resulting number is as small as possible.

# Complexity

- Time complexity: The time complexity of this approach is O(n), where n is the number of digits in the input number. We iterate through each digit of the number once.
  
- Space complexity: The space complexity is also O(n) as we use a stack to store the digits, and the resulting string may have a length of up to n.
