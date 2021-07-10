raw, col = map(int, input().split())

data = [list(map(int, input().split())) for _ in range(raw)]

compare_list = []

for i in range(raw):
    min_card = min(data[i])
    compare_list.append(min_card)

compare_list.sort()
print(compare_list[-1])