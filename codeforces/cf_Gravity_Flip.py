#author: uniqueinx
#codeforces: Gravity Flip
n = int(raw_input())
cubes = map(int, raw_input().split())
out =''
cubes.sort()
for i in cubes:
	out += str(i) + ' '  
print out[:-1]
