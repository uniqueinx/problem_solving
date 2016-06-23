#author: uniqueinx
#hacker rank: Cut the sticks
n = int(raw_input())
l = map(int, raw_input().split())
l.sort()
indx = 0
while indx < n:
    x = l[indx]
    print len(l[indx:])
    while indx < n and l[indx] == x:
        indx += 1
