class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        nu_occurences = {}

        for interator in arr:
            nu_occurences[interator] = nu_occurences.get(interator, 0) + 1

        return len(set(nu_occurences.values())) == len(nu_occurences.keys())
        
