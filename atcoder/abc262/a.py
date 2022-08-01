#data = input().split()
data = int(input())


while True:
    temp = int(data%4)
    if temp == 2:
        print(data)
        break
    else:
        data = data + 1
