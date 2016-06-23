#author: uniqueinx
#hacker: The Grid Search
def compare(g,i, j, p, r, c):
    for x in xrange(r):
        if g[i+x][j:j+c] != p[x]:
            return False
    return True

tests = int(raw_input())
for test in xrange(tests):
    R,C = map(int, raw_input().split())
    g = [raw_input() for i in xrange(R)]
    r,c = map(int, raw_input().split())
    p = [raw_input() for i in xrange(r)]
    found = 0
    for i in xrange(R - r + 1):
        for j in xrange(C - c + 1):
            if compare(g, i, j, p, r, c):
                found = 1
                break
    if found:
        print 'YES'
    else:
        print 'NO'
