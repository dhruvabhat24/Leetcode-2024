class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        distinct_elements = len(set(arr))

        frequencies = {}

        for num in arr:
            frequencies[num] = frequencies.get(num, 0) + 1

        for value in sorted(frequencies.values()):
            if value <= k:
                distinct_elements -= 1
                k -= value
            else:
                break

        return distinct_elements
