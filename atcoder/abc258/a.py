a = int(input())

hour = 21 + int(a / 60)
minute = a % 60
if minute < 10:
    print(hour%24,":0",minute,sep = '')
else:
    print(hour%24,":",minute,sep = '')
