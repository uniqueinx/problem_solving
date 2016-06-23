#author: uniqueinx
#hacker: Game of Thrones - I
found, odd = True, False
string = raw_input()
set_string = set(string)
list_string = list(string)
counts = [list_string.count(i) for i in set_string]

for count in counts:
	if count % 2 != 0:
		if odd:
			found = False
			break
		else:
			odd = True
print 'YES' if found else 'NO'' 
