#author: uniqueinx
#hacker: Flipping bits
tests = int(raw_input())
for test in xrange(tests):
    b = bin(int(raw_input()))[2:]
    output = '1'*(32-len(b))
    for i in b:
        output += '1' if i == '0' else '0'
    print int(output,2)
