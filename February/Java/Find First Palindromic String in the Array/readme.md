**Class Name:**

* `Solution`: This class provides methods to find the first palindrome in an array of strings.

**Methods:**

* **`public String firstPalindrome(String[] words)`:**
    * Takes an array of strings (`words`) as input.
    * Iterates through each string in the array.
    * For each string, calls the `isPalindrome` method to check if it's a palindrome.
    * If a palindrome is found, returns it immediately.
    * If no palindrome is found, returns an empty string (`""`).

* **`private boolean isPalindrome(String s)`:**
    * Takes a string (`s`) as input.
    * Uses two pointers, `left` and `right`, to check for palindromic structure.
    * Iterates while `left` is less than `right`:
        * Compares the characters at `left` and `right` indices.
        * If they're not equal, returns `false` (not a palindrome).
        * Otherwise, increments `left` and decrements `right` to continue checking.
    * If the loop completes without finding a mismatch, returns `true` (palindrome).

**Key Points:**

- **Time Complexity:** O(n * m), where n is the number of words and m is the average length of a word.
- **Space Complexity:** O(1), using constant extra space.
- **Palindrome Check:** Uses the two-pointer approach for efficient palindrome detection.
