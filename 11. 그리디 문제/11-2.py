number = list(input()) # list화
number = list(map(int, number)) # list 요소 int화
total = 0
for data in number:
    # 맨 처음일 때
    if data == number[0]:
        total = data
        continue
    # 데이터 더하기만 할 경우
    if data == 0 or data == 1 or total == 0:
        total += data
    else:
        total *= data

print(total)