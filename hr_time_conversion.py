#author: uniqueinx
#hacker: Time Conversion
import sys
time = raw_input().strip().split(':')
if time[2][2] == 'P' and int(time[0]) < 12:
    time[0] = str(int(time[0]) + 12)
elif (time[2][2] == 'A' and time[0] == '12'):
    time[0] = '0' + str((int(time[0]) + 12) % 24)
print '%s:%s:%s' %(time[0], time[1], time[2][:2])
