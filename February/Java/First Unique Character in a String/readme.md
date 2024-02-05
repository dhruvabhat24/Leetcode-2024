# Code Explanation

**Class and Method:**

**Class:**
- The code defines a class named `Solution`.

**Method:**
- The class contains a method named `firstUniqChar(String s)`.
- This method takes a string `s` as input and returns an integer.

**Logic:**

**Iterate through characters:**
- The method uses a `for` loop to iterate through each character in the string `s`.
- Inside the loop:
    1. **Get current character:**
        - The character at the current index `i` is retrieved using `s.charAt(i)` and stored in the variable `c`.
    2. **Check for uniqueness:**
        - The method uses `s.lastIndexOf(c)` to find the last occurrence of `c` in the string.
        - It compares this index with the current index `i` using `i == s.lastIndexOf(c)`.
        - If they are equal, it means `c` appears only once in the string, and it's unique at the current index.
        - To ensure this is the first unique character, it also checks `i == s.indexOf(c)` to verify that it's the first occurrence.
        - If both conditions are true, it means the first unique character has been found, and the method returns `i` (its index).

**Return -1:**
- If the loop completes without finding a unique character, it means all characters in the string are either repeated or the string is empty. In this case, the method returns `-1` to indicate that no unique character was found.

**Summary:**

The `firstUniqChar` method efficiently finds the index of the first unique character in a string by leveraging built-in string methods and a simple loop. It returns the index of the first unique character if found, or -1 if no unique character exists.
