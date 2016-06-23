#author: uniqueinx
#codeforces: Rank List

n, k = map(int, raw_input().split())
teams = [(map(int,raw_input().split())) for x in xrange(n)]
teams.sort(key = lambda team: (-team[0],team[1]))
print teams.count(teams[k-1])
