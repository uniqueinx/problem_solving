#author: uniqueinx
#hacker rank: Find Digits
tests = int(raw_input())
for test in xrange(tests):
    N = int(raw_input())
    countt = 0
    for i in str(N):
        if i != '0' and N % int(i) == 0:
            countt += 1
    print countt
