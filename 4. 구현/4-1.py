space_max = int(input()) # 공간 크기
move = list(map(str, input().split())) # 이동 명령

x, y = 1, 1

for data in move:
    if data == 'L':
        if y == 1:
            continue
        y -= 1
    elif data == 'R':
        if y == space_max:
            continue
        y += 1
    elif data == 'U':
        if x == 1:
            continue
        x -= 1
    elif data == 'D':
        if x == space_max:
            continue
        x += 1

print(x, y)