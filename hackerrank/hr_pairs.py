#author: uniqueinx
#hacker: Pairs

# Head ends here
def pairs(a,k):
    #a contains array of numbers and k is the value of difference
    a.sort()
    c = 0
    for i in a:
        if search(a, i+k):
            c += 1
    return c
def search(a, i):
    first,last,found = 0, len(a)-1, False
    while not found and first<=last:
        mid = (first + last) / 2
        if a[mid] == i:
            found = True
        else:
            if i < a[mid]:
                last = mid - 1
            else:
                first = mid + 1
    return found
# Tail starts here
if __name__ == '__main__':
    a = map(int, raw_input().strip().split(" "))
    _a_size=a[0]
    _k=a[1]
    b = map(int, raw_input().strip().split(" "))
    print pairs(b,_k)
