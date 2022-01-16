# 판
m = input()
move_x = ord(m[0]) - 96
move_y = int(m[1])

m = (move_x, move_y)
moves = [(2, 1), (2, -1), (1, 2), (1, -2), (-1, -2), (-1, 2), (-2, 1), (-2, -1)]

count = 0

for mo in moves:
    if 9 > m[0] + mo[0] > 0 and 9 > m[1] + mo[1] > 0:
        count += 1
    else:
        continue
print(count)