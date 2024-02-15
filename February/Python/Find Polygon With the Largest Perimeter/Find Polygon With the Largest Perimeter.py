class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        nums.sort()
        tot = sum(nums)

        cur_sum = 0

        for i in reversed(range(len(nums))):
            cur_sum += nums[i]
            rem = tot - cur_sum

            if rem > nums[i]:
                return rem + nums[i]

        return -1
