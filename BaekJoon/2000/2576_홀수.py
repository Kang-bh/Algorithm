total_result = 0
min_num = 100

for i in range(0, 7):
    num = int(input())
    if (num % 2 == 0):
        continue
    
    if min_num > num:
        min_num = num

    total_result += num


if (min_num == 100):
    print(-1)
else :
    print(total_result)
    print(min_num)