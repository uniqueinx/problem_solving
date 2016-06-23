#author: uniqueinx
#hacker rank: Library Fine
d, m, y = map(int, raw_input().split())
xd, xm, xy = map(int, raw_input().split())
fine = 0
if xy == y:
    if m > xm:
        fine = (m - xm) * 500
    elif m == xm:
        if d > xd:
            fine = (d - xd) * 15
elif y > xy:
    fine = 10000
print fine
