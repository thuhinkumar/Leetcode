class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        g = defaultdict(list)

        for ana in strs:
            key = [0]*26
            for c in ana:
                key[ord(c)-ord('a')]+=1
            g[tuple(key)].append(ana)
        
        return g.values()