# Ideology
 The idea is similar to the longest palindromic substring problem.
## Steps
-> we will have an boolean array a of size n x n . <br> -> a[i][j] = 1 if substring s[i..j] is palindrome. <br> -> Every substring of single character is palindrome <br>-> For every substring of length 2 we will cheak whether both the character are equal or not <br> -> for every substring with length >=3 a[i][j]=1 if s[i]==s[j] && a[i+1][j-1]==1.

### Time Complexity : O(N^2)
### Space Complexity : O(N^2)
