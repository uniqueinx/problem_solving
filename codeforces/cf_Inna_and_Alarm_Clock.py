#author: uniqueinx
#codeforces: Inna and Alarm Clock
#Created on Feb 11, 2014

N = input()
xx = []
yy = []
for i in range(N):
    x,y = map(int,raw_input().split())
    if x not in xx:
        xx.append(x)
    if y not in yy:
        yy.append(y)
print min(len(xx), len(yy))
