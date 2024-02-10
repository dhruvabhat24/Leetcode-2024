**Class Solution:**

**Methods:**

* **`isPalindrome(String s, int left, int right)`**
    * Checks if a substring of `s` between indices `left` and `right` is a palindrome.
    * Uses a `while` loop to compare characters from `left` to `right`.
    * Returns `true` if all characters match, `false` otherwise.

* **`countSubstrings(String s)`**
    * Counts the number of palindromic substrings in `s`.
    * Uses nested loops to consider all possible substrings.
    * Calls `isPalindrome` to check each substring.
    * Returns the total count of palindromic substrings.

**Summary:**

* The `Solution` class provides methods for:
    * Identifying palindromes (`isPalindrome`)
    * Counting palindromes in a string (`countSubstrings`)
