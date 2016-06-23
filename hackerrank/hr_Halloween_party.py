#author: uniqueinx
#hacker rank: Halloween party
t = int(raw_input())
for i in range(t):
    n = int(raw_input())
    a = []
    for j in range(1,n/2+1):
        a.append((n-j) * j)
    print max(a)
