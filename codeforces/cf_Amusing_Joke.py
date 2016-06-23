#author: uniqueinx
#codeforces: Amusing Joke
host = list(raw_input())
guest = list(raw_input())
shuffled = list(raw_input())
c_cat = host + guest
print 'YES' if sorted(c_cat) == sorted(shuffled) else 'NO'