temp = input().split()
n = int(temp[0])
l = int(temp[1])
k = int(input())
cut = []
data = input().split()

def verify(tar):
    cnt = 0
    last = 0
    for i in range(n):
        if cut[i] - last >= tar and l - cut[i] >= tar:
            cnt += 1
            last = cut[i]
    if cnt >= k:
        return 1
    return 0
        

for i in range(n):
    cut.append(int(data[i]))
start = -1
end = l + 1
while end - start > 1:
    guess = int((start + end) / 2)
    flag = verify(guess)
    if(flag):
        start = guess
    else:       
        end = guess
print(start)