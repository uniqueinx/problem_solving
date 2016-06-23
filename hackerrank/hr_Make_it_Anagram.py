'''
Created on Feb 17, 2014

@author: uniqueinx
hackerrank: Make it Anagram
'''
a = raw_input()
b = raw_input()
acount = [0 for i in range(26)]
bcount = [0 for i in range(26)]
for i in a:
    acount[ord(i) - ord('a')]+=1
for i in b:
    bcount[ord(i) - ord('a')]+=1
counter = 0
for i in range(26):
    counter += abs(acount[i] - bcount[i])
print counter

