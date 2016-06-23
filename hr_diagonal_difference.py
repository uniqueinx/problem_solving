#author: uniqueinx
#hacker rank: Diagonal Difference
import sys
n = int(raw_input().strip())
a = []
for a_i in xrange(n):
    a_temp = map(int,raw_input().strip().split(' '))
    a.append(a_temp)
d1, d2 = 0, 0
for i in xrange(n):
    d1+=a[i][i]
    d2+=a[i][n-i-1]
print abs(d1-d2)
