#author: uniqueinx
#hackerrank: IsFibo
def fib(n):
	a = []
	a.append(0);
	a.append(1);
	for i in range(2,n):
		a.append(a[i-2] + a[i-1])
	return a
	
s = fib(100)
print s
t = int(raw_input())
for i in range (t):
	n = int(raw_input())
	if n in s:
		print 'IsFibo'
	else:
		print 'IsNotFibo'
