class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s)!=len(t)):
            return False
            
        s_letters = defaultdict(int)
        for c in s:
            s_letters[c]+=1
        for c in t:
            s_letters[c] -=1
            if s_letters[c]<0:
                return False
        return True
