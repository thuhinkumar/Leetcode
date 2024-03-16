class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        left_multiply = []
        right_multiply = []
        ans = []
        total = 1
        #left
        for num in nums:
            total = num*total
            left_multiply.append(total)
        #right
        total = 1
        for num in reversed(nums):
            total = num*total
            right_multiply.append(total)
        right_multiply.reverse()

        ans = [right_multiply[1]]
        for i in range(1,len(nums)-1):
            ans.append(left_multiply[i-1]*right_multiply[i+1])
        ans += [left_multiply[-2]]
        
        print(left_multiply)
        print(right_multiply)
        return ans

