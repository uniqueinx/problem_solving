#!/bin/python
#author: uniqueinx
#hacker rank: Maximizing XOR

# Complete the function below.
def  maxXor( l,  r):
    mx = 0
    for i in xrange(l, r+1):
        for j in xrange(i,r+1):
            mx = max(mx, i ^ j)
    return mx

_l = int(raw_input());
_r = int(raw_input());

res = maxXor(_l, _r);
print(res)
