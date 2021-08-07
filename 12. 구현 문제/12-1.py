number = list(input())
N = len(number)//2

data1 = number[:N]
data2 = number[N:]
sum1, sum2 = 0, 0

for i in range(N):
    sum1 += int(data1[i])
    sum2 += int(data2[i])

if sum1 == sum2:
    print('LUCKY')
else:
    print('READY')