class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        sol = {}
        for i in strs:
            x = ''.join(sorted(list(i)))
            try:
                sol[x].append(i)
            except KeyError:
                sol[x] = [i]
        return [i for i in sol.values()]
        
