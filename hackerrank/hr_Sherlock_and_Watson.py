'''
Created on Feb 16, 2014
@author: uniqueinx
hackerrank: Sherlock and Watson
'''
N, K, Q = map(int, raw_input().split())
a = map(int , raw_input().split())
b = [0 for i in range(N)]
for i in range(N):
    b[(i + K % N)%N] = a[i]
for j in range (Q):
    q = input()
    print b[q]
