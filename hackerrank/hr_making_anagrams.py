#author: uniqueinx
#hacker: Making Anagrams
a = raw_input()
b = raw_input()
sa = set(a)
sb = set(b)
la = list(a)
lb = list(b)
count = 0
for i in sa:
    if i not in sb:
        count += la.count(i)
        la[:] = [x for x in la if x != i]
for i in sb:
    if i not in sa:
        count += lb.count(i)
        lb[:] = [x for x in lb if x != i]
u = set(la)
for i in u:
    count += abs(la.count(i) -lb.count(i))
print count
