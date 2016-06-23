import math as m 
test_cases = int(raw_input())
for test in xrange(test_cases):
	s, e = map(int, raw_input().split())
	root = int(m.ceil(m.sqrt(e)))
	counter = 0
	print root
	for i in xrange(root+1):
		tmp = m.sqrt(i)
		if tmp >= s and tmp <= root:
			counter += 1
	print counter 