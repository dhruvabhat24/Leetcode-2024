## Explanation of the Code:

### Pragma Directives:
- `#pragma GCC optimize("O3", "unroll-loops")`: These are compiler directives for the GCC compiler. They are used to optimize the code by enabling certain optimizations. In this case, "O3" indicates aggressive optimization, and "unroll-loops" suggests unrolling loops for potentially faster execution.

### Class: Solution

### Method: maxDepth

#### Parameters:
- `s` (string&): Input string containing parentheses. Passed by reference to avoid unnecessary copying.

#### Returns:
- `int`: The maximum depth of nested parentheses in the input string.

#### Variables:
- `ans` (int): Variable to store the maximum depth of nested parentheses encountered so far.
- `p` (int): Variable to keep track of the current nesting level of parentheses.

#### Steps:
1. Initialize `ans` and `p` to 0.
2. Iterate through each character `c` of the input string `s` using a range-based for loop.
3. Increment `p` by 1 if the current character `c` is '(', indicating the opening of a new nested level.
4. Decrement `p` by 1 if the current character `c` is ')', indicating the closing of a nested level.
5. Update `ans` with the maximum of the current `ans` and `p`. This keeps track of the maximum nesting level encountered so far.
6. After iterating through the entire string, return the value of `ans` as the maximum depth of nested parentheses.

#### Example:
- Input: s = "(a(b)c)d((e)f)"
- Output: 3
- Explanation: The maximum depth of nested parentheses is 3, as seen in "(a(b)c)d((e)f)".
