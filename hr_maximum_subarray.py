#author: uniqueinx
#hacker: The Maximum Subarray
def max_non(a):
    _sum = 0
    for i in a:
        if i > 0:
            _sum += i
    if _sum > 0:
        return _sum
    else:
        return max(a)

def max_(a, n):
    if not a:
        return 'fuck'
    _sum = best_sum = a[0]
    for i in xrange(1, n):
        val = _sum + a[i]
        if val > a[i]:
            _sum = val
        else:
            _sum = a[i]

        if _sum > best_sum:
            best_sum = _sum
    return best_sum

def max_subarray(A):
    max_ending_here = max_so_far = A[0]
    for x in A[1:]:
        max_ending_here = max(x, max_ending_here + x)
        max_so_far = max(max_so_far, max_ending_here)
    return max_so_far

tests = int(raw_input())
for test in xrange(tests):
    n = int(raw_input())
    a = map(int, raw_input().split(' '))
    print max_(a, n), max_non(a)
