#author: uniqueinx
#hackerrank: 20/20 march Manasa loves Maths
import itertools as it

lis = []
occ = []
#preprocessing
#=============

#generate list of all numbers -of at max 3 digits- divisable by 8
for i in xrange(125):
	tmp = str(i*8)
	lis.append('0'*(3-len(tmp))+tmp)
#construct a lookup table from the previous list in manner [(key, permutation_of_key)]
for i in lis:
	perms = [''.join(p) for p in it.permutations(i)]
	occ.append((i,perms))

#processing
#========== 
t = int(raw_input())
for s in xrange(t):
	num = raw_input()
	match = 0
	#case for handling small input by brute-forcing 
	if len(num) < 3:
		perms = [''.join(p) for p in it.permutations(num)]
		for i in perms:
			if int(i) % 8 == 0:
				match = 1
	#case for handling large input by lookup table
	else:
		for i in occ:
			for j in i[1]:
				if j in num:
					#print j,' matched ', num, ' with key ', i[0] 
					if int(i[0]) % 8 == 0:
						match = 1
						break
			if match > 0:
				break
	#display output
	if match == 1:
		print 'YES'
	else:
		print 'NO'	
