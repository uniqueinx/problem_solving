#author: uniqueinx
#hacker: Jim and the Orders
n = int(raw_input())
a = []
output = ''
for i in xrange(n):
    a.append((i + 1, map(int,raw_input().split())))
a.sort(key=lambda x : sum(x[1]))
for i in a:
    output += str(i[0]) + ' '
print output.strip()
