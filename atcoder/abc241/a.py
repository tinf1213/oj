data = input().split()
d = []
l = len(data)
for i in range(l):
    d.append(int(data[i]))
start = 0
for i in range(3):
    temp = d[start]
    start = temp
print(temp)