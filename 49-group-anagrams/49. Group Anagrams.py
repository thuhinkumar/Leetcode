class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        g = defaultdict(list)

        for ana in strs:
            sorted_ana = sorted(ana)
            g[str(sorted_ana)].append(ana)
        
        return g.values()