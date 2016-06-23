'''
Author: uniqueinx
hackerrank: Power of large numbers
'''
def pow(x,n, M):
    if n == 0:
        return 1
    elif n == 1:
        return x
    elif n % 2 == 0:
        return pow((x*x) % M, n/2)
    else:
        return x * pow((x*x) % M, (n-1)/2)


def pow_mod(x, y, z):
    number = 1
    while y:
        if y & 1:
            number = number * x % z
        y >>= 1
        x = x * x % z
    return number

Mod = 1000000007
while 1:
        try:
                t = raw_input()
                if t.strip() == '':
                        break
                for i in range (0,int (t)):
                        n = raw_input()
                        l = n.rsplit(' ')
                        out = pow_mod(long(l[0])%Mod, long(l[1])), Mod)
                        print out
        except(EOFError):
                break

