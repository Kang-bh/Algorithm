N = int(input())

num_list = list(map(int, input().split()))
num_list.sort()

X = int(input())


# 시간 제한 고려
def solve(N:int, num_list:list, X:int):
    result = 0
    # # 시간 초과
    # for i in range(0, N):
    #     for j in range(i, N):
    #         if num_list[i] + num_list[j] == X:
    #             result += 1

    # 정렬해놓고 위에서 아래로?
    # for i in range(0, mid):
    #     find_num = X - num_list[i]
    #     for data in check_num_list:
    #         if data == find_num:
    #             result+=1
    #             check_num_list.remove(data)
    #             break
    
    start, end = 0, N-1

    while start < end:
        interval_sum = num_list[start] + num_list[end]
        if interval_sum == X:
            result +=1
            start +=1
            end -= 1
        elif interval_sum < X:
            start += 1
        else :
            end -= 1
        

    return result


    # for i in range(0, N):
    #     find_num = X - num_list[i]
    #     count = num_list.count(find_num)
    #     result += count



print(solve(N, num_list, X))