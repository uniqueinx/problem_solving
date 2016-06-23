#author: uniqueinx
#hacker rank: Two arrays
t = int(raw_input())
for z in range(t):
    N,K = map(int, raw_input().split())
    A = map(int, raw_input().split())
    B = map(int, raw_input().split())
    A.sort()
    B.sort()
    B = B[::-1]
    '''
    #another solution
    i = j = 0
    while i < N and j < N:
        if(A[i] + B[j]) >= K:
            N-=1
            A.remove(A[i])
            B.remove(B[j])
            i = j = 0
        else:
            j+=1
    if(len(A) > 0) or (len(B) > 0):
        print 'NO'
    else:
        print 'YES'
    '''
    out = 'YES'
    for i,j in zip(A,B):
        if i+j < K:
            out = 'NO'
    print out
