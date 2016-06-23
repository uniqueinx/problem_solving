#!/usr/bin/python
#author: uniqueinx
#HackerRank: Sherlock and Array
T = int(raw_input())
for t in xrange(T):
    N = int(raw_input())
    numbers = map(int, raw_input().split())
    fore_counter = back_counter = 0
    fore_arr = list(numbers)
    back_arr = [0 for i in xrange(N)]
    for i in xrange(N):
        fore_arr[i] += fore_counter
        fore_counter = fore_arr[i]
        back_counter += numbers[N-i-1]
        back_arr[N-i-1] = back_counter
    yes = 0
    for i in xrange(N):
        if fore_arr[i] == back_arr[i]:
            yes = 1
            break
    print 'YES' if yes else 'NO'