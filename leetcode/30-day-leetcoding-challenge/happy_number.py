class Solution:
    def isHappy(self, n: int) -> bool:
        s = set()
        s.add(n)
        x = str(n)
        while True:
            t = 0
            for c in x:
                t += int(c)**2
            if t == 1:
                return True
            if t in s:
                return False
            s.add(t)
            x = str(t)
