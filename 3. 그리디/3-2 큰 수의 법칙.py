array_size, plus, limit = input().split()
array_size = int(array_size)
plus = int(plus) # 더할 횟수
limit = int(limit) # 연속 횟수
result = 0

array = input().split()

for i in range(array_size):
    array[i] = int(array[i])

max_data = 0
next_data = 0
# 큰 수 정하기
for data in array:
    if max_data < data:
        max_data = data
# 다음 수 정하기
for data in array:
    if array.count(max_data) > 1: # 큰 수가 두 개인 경우
        next_data = max_data
    else: # 큰 수 한 개
        if next_data < data:
            if data == max_data:
                continue
            else:
                next_data = data

print(next_data)
count = limit

for i in range(plus):
    if i == 0 or i % 3 != 0:
        result += max_data
        count -= 1
    else:
        result += next_data
        count = limit

print(result)