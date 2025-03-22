from collections import deque

N = int(input())

result = 0
index = 0

data = list(map(int, input().split(' ')))

data.sort(reverse=True)

while index != len(data):
    index += data[index]
    result += 1

print(result)