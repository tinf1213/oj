a = input().split()
x = int(a[0])
y = int(a[1])
c = int(a[2])
if x*3 < y:
    print(x * c)
else:
    print(int(c/3)*y + int(c%3)*x)
