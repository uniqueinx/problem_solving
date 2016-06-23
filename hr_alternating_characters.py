#author: uniqueinx
#hacker: Alternating Characters
tests = int(raw_input())
for test in xrange(tests):
    s = raw_input().strip()
    x = s[0]
    delete = 0
    for i in xrange(1, len(s)):
        if s[i] == x:
            delete += 1
        else:
            x = s[i]
    print delete
