### Find All Duplicates in an Array
Code description

This Python code defines a class `Solution` with a method `findDuplicates` that takes a list of integers `nums` as input and returns a list containing duplicate integers found within `nums`.

1. Initialize an empty list `output` to store the duplicates.
2. Iterate through each element `n` in the input list `nums`.
3. Get the absolute value of `n` and assign it to `m`.
4. Check if the element at index `m-1` in `nums` is negative. If so, it indicates that `m` has occurred previously.
    - If true, append `m` to the `output` list as it is a duplicate.
    - If false, mark the element at index `m-1` in `nums` as negative by multiplying it by -1.
5. Finally, return the `output` list containing the duplicates found in `nums`.
