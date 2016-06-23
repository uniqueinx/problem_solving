#author: uniqueinx
#hackerrank: 101 hack march Rectangular Game
n = int(raw_input())
mina, minb = 10**6, 10**6
for  k in range(n):
  a, b = map(int,raw_input().split())
  mina = min(a, mina)
  minb = min(b, minb)
print mina * minb
