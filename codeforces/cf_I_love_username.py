#author: uniqueinx
#codeforces: I_love_%username%
n = int(raw_input())
points = map(int,raw_input().split())
counter = 0
great = less = points[0]
for point in points[1:]:
	if point > great:
		great = point
		counter += 1
	if point < less:
		counter += 1
		less = point
print counter