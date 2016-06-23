#author: uniqueinx
#hacker rank: Cavity Map
n = int(raw_input())
arr = [(list(raw_input())) for i in xrange(n)]
for idx_tb in xrange(1, n-1):
    for idx_lr in xrange(1, n-1):
        if arr[idx_tb-1][idx_lr] != 'X' and int(arr[idx_tb-1][idx_lr]) < int(arr[idx_tb][idx_lr]) and \
        arr[idx_tb+1][idx_lr] != 'X' and int(arr[idx_tb+1][idx_lr]) < int(arr[idx_tb][idx_lr]) and \
        arr[idx_tb][idx_lr-1] != 'X' and int(arr[idx_tb][idx_lr-1]) < int(arr[idx_tb][idx_lr]) and \
        arr[idx_tb][idx_lr+1] != 'X' and int(arr[idx_tb][idx_lr+1]) < int(arr[idx_tb][idx_lr]):
            arr[idx_tb][idx_lr] = 'X'
for i in arr:
    print ''.join(i)
