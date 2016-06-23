# author: uniqueinx
# hacker_rank: Caesar Cipher
l = int(raw_input())
s = raw_input()
s = list(s)
k = int(raw_input()) % 26
###### sol.01
# for c in xrange(l):
    # if ord(s[c]) > 64 and ord(s[c]) < 91 :
    #     s[c] = chr(((ord(s[c]) + k - 65) % 26) + 65)
    # elif ord(s[c]) > 96 and ord(s[c]) < 123 :
    #     s[c] = chr(((ord(s[c]) + k - 97) % 26) + 97)
###### sol.02
for i, c in enumerate(s):
	if c.isalpha():
		nc = ord(c) + k
		if c.isupper():
			if nc > ord('Z'):
				nc = nc - ord('Z') + ord('A') - 1
		else:
			if nc > ord('z'):
				nc = nc - ord('z') + ord('a') - 1
		s[i] = chr(nc)
print ''.join(s)
