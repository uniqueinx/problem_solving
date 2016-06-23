#author: uniqueinx
#hackerrank: Utopian Tree
tmp = [0 for i in xrange(61)]
c = 0
for i in xrange(61):
	if i % 2 == 0:
		c += 1
	else:
		c*=2
	tmp[i] = c

t = int(raw_input())
for i in xrange(t):
    print tmp[int(raw_input())]
