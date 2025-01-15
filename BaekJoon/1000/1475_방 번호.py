N = input()

num_list = list()

for i in range(0, 9):
    num_list.append(0)

for num in N:
    num = int(num)

    if num == 6 or num == 9:
        num = 6

    num_list[num] += 1


# 6, 9 정리
if num_list[6] % 2 == 1:
    num_list[6] = num_list[6]//2 + 1
else:
    num_list[6] = num_list[6]//2

print(max(num_list))