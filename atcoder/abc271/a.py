import string
num = int(input())

n = hex(num)
s = str(n)
print(s)
ans = s[2:]
if :
    print(0, end = '')
    if str.isalpha(ans):
        print(str.upper(ans))
    else:
        print(ans)
else:
    for i in range(0, len(ans)):
        if str.isalpha(ans[i]):
            print(str.upper(ans[i]), end = '')
        else:
            print(ans[i], end = '')
    print()



