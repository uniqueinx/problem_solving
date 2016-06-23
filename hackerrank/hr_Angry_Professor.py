import math as m 
test_cases = int(raw_input())
for test in xrange(test_cases):
	n, k = map(int, raw_input().split())
	stu = map(int, raw_input().split())
	counter = 0
	for i in stu:
		if i <= 0:
			counter += 1
	print 'YES' if counter < k else 'NO'