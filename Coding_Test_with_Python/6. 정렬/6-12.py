size, num = map(int, input().split())
#정렬 이용!!!
data1 = list(map(int, input().split()))
data2 = list(map(int, input().split()))

data1.sort()
data2.sort(reverse=True) # 큰 순서

for i in range(num):
    if data1[i] < data2[i]:
        data1[i], data2[i] = data2[i], data1[i]

sum = 0
for i in data1:
    sum += i

print(sum)