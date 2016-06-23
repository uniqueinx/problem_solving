#author: uniqueinx
#hacker rank: Service Lane
N,T = map(int,raw_input().split())
width = map(int, raw_input().split())
for i in range(T):
    i,j = map(int,raw_input().split())
    print min(width[i:j+1])
