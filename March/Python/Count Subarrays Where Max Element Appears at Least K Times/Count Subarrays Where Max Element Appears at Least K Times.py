class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        max_n, max_cnt = max(nums), 0
        l = 0
        res = 0
        for r in range(len(nums)):
            if nums[r] == max_n:
                max_cnt += 1

            while max_cnt == k:
                if nums[l] == max_n:
                    max_cnt -= 1
                l +=1
            res += l

        return res
