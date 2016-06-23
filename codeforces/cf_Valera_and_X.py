#author: uniqueinx
#codeforces: Valera and X
n = int(raw_input())
mat = [raw_input() for i in range(n)]
char = mat[0][0]
othercahr = mat[0][1]
flag = 0
if char == othercahr:
	flag = 1
else:
	for i in xrange(n):
		for j in xrange(n):
			if i == j or i == n-j-1:
				if mat[i][j] != char:
					flag = 1
					break
			else:
				if mat[i][j] != othercahr:
					flag = 1
					break
			if flag: 
				break
if flag:
	print 'NO'
else:
	print 'YES'

	
