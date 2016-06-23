#!usr/bin/python
#author: uniqueinx
#HackerRank: Gem Stones

def main():
    T = int(raw_input())
    arr = [set(raw_input()) for x in xrange(T)]
    gems = 0
    for i in arr[0]:
        not_here = 0
        for j in xrange(T):
            if i not in arr[j]:
                not_here = 1
                break
        print i, 'not here ',not_here
        if not not_here:
            gems += 1
    print gems
        
        


if __name__ == '__main__':
    main()