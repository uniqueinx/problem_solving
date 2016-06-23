#author: uniqueinx
#codeforces: Vanya and Cards
n, x = map(int, raw_input().split())
cards = map(int, raw_input().split())
dist = abs(sum(cards))
if not dist % x:
	print dist / x
else:
	print  (dist / x) + 1
