#author: uniqueinx
#hackerrank: Handshake
from math import factorial as fr
t = int(raw_input())
r = 2 # 2 for 2 person shaking
for i in xrange(t):
	n = int(raw_input())
	print n * (n-1) / 2