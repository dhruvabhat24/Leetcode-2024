# Sequential Digits Solution

## Approach

The problem aims to generate sequential digits within a given range [low, high]. The solution involves using a helper function (`helper`) to recursively explore and generate valid sequential digits starting from each possible digit. The generated digits are stored in a set (`ans`) to avoid duplicates.

## Looping and Recursion 

1. **Initialization:**
   - Initialize a set (`ans`) to store the generated sequential digits.
   - Define a helper method (`helper`) that takes the current digit (`curr`), the lower bound of the range (`low`), the upper bound of the range (`high`), the current digit count (`cd`), and the highest digit count (`hd`).

2. **Main Function:**
   - Define the main function `sequentialDigits` that takes the lower and upper bounds of the range.
   - Initialize two variables `dl` and `dh` to store the number of digits in `low` and `high` respectively.
   - Calculate the number of digits in `low` (`dl`) and `high` (`dh`) using a while loop.

3. **Helper Method (`helper`):**
   - The helper method is designed to generate sequential digits recursively.
   - Check if the current digit count (`cd`) is greater than the highest digit count (`hd`) or if the current digit (`curr`) exceeds the upper bound (`high`). If either condition is true, return from the helper function.
   - If the current digit (`curr`) is within the specified range ([low, high]), insert it into the set (`ans`).
   - Extract the last digit (`last`) from the current digit (`curr`).
   - If the last digit is 9, return from the helper function.
   - Update the current digit by multiplying it by 10 and adding the next digit (`last + 1`).
   - Recursively call the helper function with the updated current digit and incremented digit counts.

4. **Loop Over Starting Digits:**
   - In the main function, loop from 0 to 8 (inclusive) to cover all possible starting digits (1 to 9).
   - For each starting digit, call the `helper` function with the starting digit, lower bound (`low`), upper bound (`high`), and initial digit counts.

5. **Result Collection:**
   - After the loop, the set (`ans`) contains all the generated sequential digits.
   - Copy the elements from the set to a vector (`resl`) to prepare the final result.

6. **Return Result:**
   - Return the vector (`resl`) containing the generated sequential digits.

This approach ensures that all valid sequential digits within the given range are generated and stored in the result vector. The use of recursion allows for a systematic exploration of digit combinations, and the set prevents duplicates from being included in the final result.
