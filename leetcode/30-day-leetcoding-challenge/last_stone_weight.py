class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        from queue import PriorityQueue
        q = PriorityQueue()
        for i in stones:
            q.put(-i)
        while q.qsize() > 1:
            q.put(-abs(abs(q.get()) - abs(q.get())))
        return abs(q.get())
