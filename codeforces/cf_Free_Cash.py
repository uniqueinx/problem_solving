#author: uniqueinx
#codeforces: Free Cash
n = int(raw_input())
prev = None
counter = 0
mx = 0
for i in xrange(n):
	x, y = map(int,raw_input().split())
	if (x,y) == prev:
		counter +=1
	else:
		prev = (x,y)
		mx = max(mx,counter)
		counter = 1
print max(mx,counter)