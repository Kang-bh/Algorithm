N = int(input())

min = [i for i in range(60)]
sec = [j for j in range(60)]
count = 0
for k in range(N+1):
    if k % 10 == 3:
        count += 3600
    else:
        for data_min in min:
            # 3포함
            if data_min % 10 == 3 or data_min // 10 == 3:
                count += 60
            else:
                for data_sec in sec:
                    if data_sec % 10 == 3 or data_sec // 10 == 3:
                        count += 1

print(count)