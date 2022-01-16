size = int(input())

data = []

for _ in range(size):
    num = int(input())
    data.append(num)

data.sort()
data.reverse()
for i in data:
    print(i, end = " ")