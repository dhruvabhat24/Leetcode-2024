# Find the Town Judge

The given Python code defines a class `Solution` with a method `findJudge` that takes an integer `n` representing the number of people and a list of trust relationships `trust` between them. The task is to find the "town judge," which is a person trusted by everyone but trusts no one.

## Approach:

1. Create two dictionaries, `incoming` and `outgoing`, to track the count of incoming and outgoing trust relationships for each person.
2. Iterate through the trust relationships and update the counts in the dictionaries accordingly.
3. Iterate through the range of people (from 1 to `n+1`).
   - Check if a person has no outgoing trust (`outgoing[i] == 0`) and has incoming trust from all other people (`incoming[i] == n - 1`).
   - If the conditions are met, return that person as the town judge.
4. If no town judge is found, return -1.

## Result:
The code efficiently identifies the town judge by maintaining counts of incoming and outgoing trust relationships for each person. The town judge is the person who is trusted by everyone else (`incoming[i] == n - 1`) and trusts no one (`outgoing[i] == 0`). This approach ensures an optimal solution to finding the town judge in the given trust relationships.
