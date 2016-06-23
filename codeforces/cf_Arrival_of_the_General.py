#author: uniqueinx
#codeforces: Arrival of the General
n = int(raw_input())
soliders = map(int, raw_input().split())
mx = max(soliders)
mn = min(soliders)
for i in xrange(n):
	if soliders[i] == mx:
		mx_i = i
		break
for i in xrange(n-1,-1,-1):
	if soliders[i] == mn:
		mn_i = i
		break
if mn_i > mx_i:
	print mx_i + (n-mn_i-1)
else:
	print mx_i + (n-mn_i-1)-1