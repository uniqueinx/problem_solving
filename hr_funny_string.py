#author: uniqueinx
#hacker: Funny String
def funny(s, r):
    for i in xrange(len(s) -1):
        if abs(ord(s[i]) - ord(s[i+1])) != abs(ord(r[i]) - ord(r[i+1])):
            return False
    return True

tests = int(raw_input())
for test in xrange(tests):
    text = raw_input()
    r_text = text[::-1]
    if funny(text, r_text):
        print 'Funny'
    else:
        print 'Not Funny'
