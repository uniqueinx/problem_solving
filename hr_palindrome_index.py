#author: uniqueinx
#hacker: Palindrome Index
tests = int(raw_input())
for test in xrange(tests):
    s = raw_input()
    if s == s[::-1]:
        print -1
        continue
    i, j, found = 0, len(s)-1, 0
    while i != j:
        if s[i] != s[j]:
       		t = s[:i] + s[i+1:]
       		tt = s[:j] + s[j+1:]
       		if t == t[::-1]:
       			print i
       			found = 1
       			break
       		elif tt == tt[::-1]:
       			print j
       			found = 1
       			break
        i += 1
        j -= 1
    if found:
        continue
    else:
        print 'fuck'
