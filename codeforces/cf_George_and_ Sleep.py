#author: uniqueinx
#codeforces: George and Sleep

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
		current_t = raw_input()
		if current_t.strip() == '':
			break
		period = raw_input()
		s = current_t.rsplit(':')
		t = period.rsplit(':')
		p = int (s[0]) * 60 + int(s[1]) - int (t[0]) * 60 - int (t[1])
		if p < 0:
			p += 24*60
		mint = p % 60
		hrs = (p - mint) / 60
		out = ''
		if len(str(hrs)) < 2 :
			out+='0'
		out+= str(hrs)+':'
		if len(str(mint)) < 2 :
			out+='0'
		out+= str(mint)
		print out
	except(EOFError):
		break
