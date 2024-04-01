T = int(input())

for i in range(0, T):
    N = int(input())
    result = 0
    list_num = [int(x) for x in input().split()]

    for num in list_num:
        result += num
    print(result)