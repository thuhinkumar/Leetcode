class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        req = {}
        for i,num in enumerate(nums):
            if num in req:
                return (req[num],i)
            else:
                req[target-num] = i
