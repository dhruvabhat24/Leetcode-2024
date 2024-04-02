# Intuition
The problem requires determining whether two given strings `s` and `t` are isomorphic. Two strings are considered isomorphic if the characters in `s` can be replaced to get `t` while preserving the order of characters. To efficiently solve this problem, we can use two arrays `s2t` and `t2s` to store mappings between characters in `s` and `t`.

# Approach
1. **Initializing Arrays**:
   - Initialize two arrays `s2t` and `t2s`, each of size 128 to store mappings between characters of `s` and `t`, and vice versa.

2. **Mapping Characters**:
   - Iterate through each character at the same index `i` in strings `s` and `t`.
   - For each character `s[i]`:
     - Check if `s[i]` maps to the same character in `t` as the corresponding character in `t` maps to in `s`. If not, return `false`.
     - Update the mapping in `s2t` and `t2s` arrays.
   - If all characters are successfully mapped and matched, return `true` as the strings are isomorphic.

# Complexity Analysis
- Time Complexity: O(N), where N is the length of the input strings `s` and `t`. We iterate through both strings once.
- Space Complexity: O(1), as the arrays `s2t` and `t2s` have a fixed size of 128, regardless of the input string lengths.
