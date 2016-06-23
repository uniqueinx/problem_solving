#author: uniqueinx
#spoj: factorial
import sys
s= sys.stdin.readlines();
counter = 0;
print len(s);
while counter < len(s):
    testcases = int (s[counter]);
    counter +=1;
    for i in range(testcases):
        print (i);
        casee = int (s[i+counter]);
        r = 0;
        while casee > 4:
            casee = int (casee / 5);
            r += casee;
        print(r);
    counter += testcases;
    print (counter);
