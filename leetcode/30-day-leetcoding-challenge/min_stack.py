class MinStack:
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.org = []
        
    def push(self, x: int) -> None:
        if self.org:
            self.org.append((x, min(self.org[-1][1], x)))
        else:
            self.org.append((x, x))
                
    def pop(self) -> None:
        return self.org.pop()[0]

    def top(self) -> int:
        return self.org[-1][0]
        
    def getMin(self) -> int:
        return self.org[-1][1]

# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
