class Solution:
    def removeKdigits(self, num: str, k: int) -> str:
        stack = []
        for i in num:
            while stack and int(stack[-1])>int(i) and k:
                stack.pop()
                k-=1
            stack.append(i)
        
        while k:
            stack.pop()
            k-=1
        ret = "".join(stack).lstrip("0")
        return ret if ret!= "" else "0"
