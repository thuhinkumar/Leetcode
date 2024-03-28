class Solution:
    def findRightInterval(self, intervals: List[List[int]]) -> List[int]:
        interval_idx = []
        for i,interval in enumerate(intervals):
            interval_idx.append((interval,i))

        interval_idx.sort()

        ans = []
        for interval in intervals:
            end = interval[1]
            l = 0
            r = len(intervals)-1
            curr_ans = -1
            while(l<=r):
                curr = (l+r)//2
                if interval_idx[curr][0][0] >= end:
                    curr_ans = curr
                    r = curr -1
                else:
                    l = curr+1
            if curr_ans != -1:
                ans.append(interval_idx[curr_ans][1])
            else:
                ans.append(-1)
        return ans


