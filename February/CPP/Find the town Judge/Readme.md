# Finding the Judge

## Class: Solution

This class contains a method `findJudge()` to determine the town judge among a group of people.

### Method: `findJudge`

Determines the town judge among a group of people based on the trust relationships.

#### Parameters

- `n`: An integer representing the number of people in the group.
- `trust`: A vector of vectors representing the trust relationships between people. Each inner vector `trust[i]` contains two integers `[a, b]`, indicating that person `a` trusts person `b`.

#### Returns

An integer representing the town judge's label if found, or `-1` if no town judge exists.

### Approach

The `findJudge()` method uses counting in and out degrees of each person to determine the town judge.

1. **Counting In and Out Degrees:**
   - Initialize two vectors `in` and `out` of size `n+1` to store the in-degree and out-degree of each person, respectively.
   - Iterate through the trust relationships:
     - For each trust relationship `[a, b]`, increment the in-degree of person `b` (`in[b]`) and the out-degree of person `a` (`out[a]`).

2. **Finding the Town Judge:**
   - Iterate through each person `i` from `1` to `n`.
     - If the in-degree of person `i` equals `n-1` (indicating that all other people trust this person) and the out-degree of person `i` equals `0` (indicating that this person trusts nobody), return `i` as the town judge.

3. **Return Result:**
   - If no town judge is found after iterating through all people, return `-1`.

The approach efficiently determines the town judge by counting the in and out degrees of each person and checking for the conditions that define a town judge.
