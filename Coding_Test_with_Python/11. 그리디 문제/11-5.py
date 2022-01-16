x, max_gram = map(int, input().split())

data = list(map(int, input().split()))
count = 0
for i in range(len(data)):
    compare = data[i] # 무조건 넣는 값
    for j in range(i, len(data)):
        # 같은 무게 밴
        if compare == data[j]:
            continue
        else:
            count += 1

print(count)