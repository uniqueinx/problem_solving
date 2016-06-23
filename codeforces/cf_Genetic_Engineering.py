#author: uniqueinx
#codeforces: Genetic Engineering

s = raw_input()
a = []
current = s[0]
count = 1
for i in range(1, len(s)):
    if s[i] == current:
        count += 1
    else:
        current = s[i]
        a.append(count)
        count = 1
a.append(count)
out = 0
for i in a :
    if i % 2 == 0:
        out+=1
print out
