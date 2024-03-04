## Class: Solution

This class contains a method `bagOfTokensScore()` to determine the maximum score you can achieve by playing the bag of tokens game.

### Method: `bagOfTokensScore`

Determines the maximum score you can achieve by playing the bag of tokens game.

#### Parameters

- `tokens`: A vector of integers representing the tokens' power values.
- `power`: An integer representing the initial power of your character.

#### Returns

- An integer representing the maximum score you can achieve.

#### Approach

1. **Sort Tokens:**
   - Sort the `tokens` vector in non-decreasing order to simplify the algorithm.

2. **Initialization:**
   - Initialize variables `s` to keep track of the score and `n` to store the size of the `tokens` vector.

3. **Iterate Through Tokens:**
   - Iterate through each token in the `tokens` vector.
   - If the current token's power requirement is less than or equal to the available `power`:
     - Increment the score `s` by 1.
     - Deduct the token's power from the available `power`.
   - If the current token's power requirement exceeds the available `power` and there are at least 4 tokens left and the score `s` is at least 1:
     - Increase the available `power` by the power of the most expensive token (last token).
     - Decrement the size of the `tokens` vector by 1.
     - Decrement the score `s` by 1.

4. **Return Result:**
   - After iterating through all tokens, return the final score `s`, which represents the maximum score achievable.

#### Time Complexity
- The time complexity of this method is O(n log n), where n is the number of tokens. This complexity arises from sorting the tokens.

#### Space Complexity
- The space complexity of this method is O(1) since we use only a constant amount of extra space regardless of the size of the input vector.
