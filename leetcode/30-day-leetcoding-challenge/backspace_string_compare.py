class Solution:
    def backspaceCompare(self, S: str, T: str) -> bool:
        res = []
        res2 = []
        for i in S:
            if i == '#':
                try:
                    res.pop()
                except IndexError:
                    pass
            else:
                res.append(i)

        for i in T:
            if i == '#':
                try:
                    res2.pop()
                except IndexError:
                    pass
            else:
                res2.append(i)
        return ''.join(res) == ''.join(res2)
        
