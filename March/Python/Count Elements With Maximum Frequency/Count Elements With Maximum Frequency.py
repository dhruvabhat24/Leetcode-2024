class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        counts = Counter(nums)
        max_frq = max(counts.values())
        return sum([count for count in counts.values() if count == max_frq])
