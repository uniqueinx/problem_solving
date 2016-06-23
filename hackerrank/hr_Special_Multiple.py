#author: uniqueinx

def gena(n):
	a = []
	for i in range(2**n):
		a.append(int (bin(i)[2:]) * 9)
	return a
def searcha(s,n):
	for i in s[n:]:
		print n
		if i %  n == 0:
			return i
	return -1

s = gena(13)
#for testing purpose
'''
for i in range(1,500):
	x = searcha(s, i)
	if x < 0:
		 print i
'''		 
while 1:
	try:
		t = raw_input()
		if t.strip() == '':
			break
		for i in range (int (t)):
			n = raw_input()
			print searcha(s, int(n))
	
	except(EOFError):
		break

