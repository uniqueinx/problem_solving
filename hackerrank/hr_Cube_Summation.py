#author: uniqueinx
#hacker rank: Cube Summation
t = int(raw_input())
for z in range(t):
    n,m = map(int,raw_input().split())
    matrx =[[[0 for i in range(n+1)] for i in range(n+1)] for i in range(n+1)]
    a = []
    for i in range(m):
        l = raw_input().split()
        command = l[0]
        if command == 'UPDATE':
            x,y,z,w = map(int,l[1:])
            matrx [x][y][z] = w
            tup = [x,y,z]
            if tup in a:
                a.remove(tup)
            a.append(tup)
        else:
            x1,y1,z1,x2,y2,z2 = map(int,l[1:])
            sum = 0
            for i in a:
                if i[0] in range(x1,x2+1) and i[1] in range(y1,y2+1) and i[2] in range(z1,z2+1):
                    sum+=matrx[i[0]][i[1]][i[2]]
            print sum
            
