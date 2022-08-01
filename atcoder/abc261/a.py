data = input().split()
numbers = []
for i in range(4):
    numbers.append(int(data[i]))

if numbers[0] > numbers[2]:
    start = numbers[0]
else:
    start = numbers[2]

if numbers[1] > numbers[3]:
    end = numbers[3]
else:
    end = numbers[1]

res = end - start

if (res < 0):
    print(0)
else:
    print(res)