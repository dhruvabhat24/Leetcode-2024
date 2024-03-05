## Explanation of `minimumLength` in Markdown:

**Class:** `Solution`

**Method:** `public int minimumLength(String s)`

**Purpose:** Finds the minimum length of a substring obtained by removing equal leading and trailing characters iteratively until no more removals are possible.

**Logic:**

1. **Two-Pointer Approach:**
   - **`int left = 0, right = s.length() - 1;`**: Initializes `left` and `right` pointers to mark the start and end of the potential substring, respectively.

2. **Iterative Character Removal:**
   - **`while(left < right)`**: Continues the loop as long as `left` hasn't reached `right`.
     - **`if(s.charAt(left) != s.charAt(right))`**: Checks if characters at `left` and `right` differ. If so, the loop terminates as further removal would break the removal pattern.
     - **`char c = s.charAt(left);`**: Stores the character at `left` for comparison with subsequent characters.
     - **`while(left < right && c == s.charAt(left)) left++;`**: Iterates `left` forward until it reaches `right` or encounters a character different from `c`, effectively skipping leading characters matching the first character.
     - **`while(left <= right && c == s.charAt(right)) right--;`**: Similarly, iterates `right` backward until it meets `left` or encounters a character different from `c`, skipping trailing characters matching the first character.

3. **Calculate Result:**
   - **`return right - left + 1;`**: After the loop, the remaining string between `left` and `right` (inclusive) represents the minimum length substring that cannot be further reduced. The length is calculated by subtracting `left` from `right` and adding 1.

**Key Points:**

- Employs two pointers to efficiently iterate and remove matching characters from both ends.
- Uses a character variable `c` to track the character being removed, ensuring palindrome-like removal.

**Assumptions:**

- The input string `s` can contain any valid characters.

**Time Complexity:**

- O(n) in the worst case, where the entire string is reduced to a single character or an empty string.

**Space Complexity:**

- O(1) as it uses constant extra space for the pointers and a single character variable.
