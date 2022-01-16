raw, col = map(int, input().split())

count = 1
x, y, direction = list(map(int, input().split())) # 행, 열, 방향
# 북 동 남 서
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

game_map = [list(map(int, input().split())) for _ in range(raw)]
game_map[x][y] = 2

def turn_left():
    global direction
    direction -= 1
    if direction == -1:
        direction = 3

turn_time = 0
while True:
    turn_left()
    next_x = x + dx[direction]
    next_y = y + dy[direction]
    # 회전한 이후 정면에 가보지 않은 칸이 존재하는 경우 이동
    if game_map[next_x][next_y] == 0:
        game_map[next_x][next_y] = 2
        x = next_x
        y = next_y
        count += 1
        turn_time = 0
        continue
    # 회전 이후 정면에 가보지 않은 칸이 없거나 바다인 경우
    else:
        turn_time += 1
    # 네 곳 다 막힌 경우
    if turn_time == 4:
        next_y = y - dy[direction]
        next_x = x - dx[direction]
        # 뒤로 갈 수 있는 경우
        if game_map[next_x][next_y] == 2:
            x = next_x
            y = next_y
        else:
            break
        turn_time = 0


print(count)