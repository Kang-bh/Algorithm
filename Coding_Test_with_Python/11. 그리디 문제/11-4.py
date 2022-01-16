import time
# 동전 개수
N = int(input())
# 화폐 단위
data = list(map(int, input().split()))
start = time.time()
data.sort() # 낮은 단위 순으로 정렬

res = [False] * 1000001

for i in range(len(data)):
    total = 0
    for j in range(i, len(data)):
        total += data[j]
        if res[total] == False:
            res[total] = True
        else:
            continue

for i in range(1, len(res)):
    if res[i] == False:
        print(i)
        break
finish = time.time()
print(finish-start)