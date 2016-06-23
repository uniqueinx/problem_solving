#author: uniqueinx
#hackerrank: Encryption
import math
p = raw_input()
width = int(math.floor(math.sqrt(len(p))))
height = int(math.ceil(math.sqrt(len(p))))
row = min(width,height)
col = max(width, height)
ma2 = ['' for i in xrange(col)]
for i in xrange(len(p)):
	ma2[i%col]+=p[i]
print ' '.join(ma2)