#author: uniqueinx
#hacker: Pangrams
print 'pangram' if len(set(raw_input().strip().replace(' ', '').lower())) == 26 else 'not pangram'
