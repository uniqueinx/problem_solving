#author: uniqueinx
#hackerrank: Sherlock and Squares

import math as ma 
t = int(raw_input())
for k in range(t):
  a, b = map(int,raw_input().split())
  counter = 0
  fix = 0
  index = 0
  for i in xrange(a,b+1):
    x = ma.sqrt(i)
    if int(x) == x:
      counter+=1
      fix = (x+1)**2
      index = x+1
      break
  while fix <= b and fix != 0:
	   counter+=1
	   index+=1
	   fix = index**2
  
  print counter
