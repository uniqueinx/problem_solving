#author: uniqueinx
#codeforces: Coder
def fun(n):
	a = [[0 for x in range (n)] for y in range(n)]
	a [0][0] = 1
	for i in range(n):
		for j in range(n):
			if a[i][j] == 0 and i > 0:
				a[i][j] = - a[i-1][j]
			elif j > 0:
				a[i][j] = - a[i][j-1]
	return a

while 1:
	try:
		t = raw_input()
		if t.strip() == '':
			break
		s= fun(int(t))
		c = 0
		out = ''
		for i in s:
			for x in i:
				if x == 1:
					c += 1
					out += 'C'
				else:
					out+='.'
			out+='\n'
		print c
		print out[:len(out)-1]
	except(EOFError):
		break
