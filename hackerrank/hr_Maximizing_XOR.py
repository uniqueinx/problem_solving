#!/bin/python

# Complete the function below.


def  maxXor( l,  r):
    mx = 0
    for i in xrange(l,r+1):
        for j in xrange(l,r+1):
            x = i ^ j
            #print i,j,x
            if x > mx:    mx = x
    return mx
    

_l = int(raw_input());


_r = int(raw_input());

res = maxXor(_l, _r);
print(res)

