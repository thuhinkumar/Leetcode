class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        candidates.sort()
        ans = []
        def dfs(i,total,curr):
            #basecase
            if total == target:
                ans.append(curr[:])
                return
            if total > target or i>len(candidates)-1:
                return
            #include candidate
            curr.append(candidates[i])
            total+=candidates[i]
            dfs(i+1,total,curr)

            while(i<len(candidates)-1 and curr[-1] == candidates[i+1]):
                i+=1

            #dont include candidate
            curr.pop()
            total-=candidates[i]
            dfs(i+1,total,curr)
    
        dfs(0,0,[])
        return ans
    