n = int(input())

# todo : 입력 수 제한
road_list = list(map(int, input().split()))
city_list = list(map(int, input().split()))

flag = False
result = 0



def find_next_min_liter_index (index : int):
    min_index = city_list[index]
    for i in range(index, n):
        if min_index > city_list[i]:
            return i
    return -1


for i in range(0, n):
    L = city_list[i]
    next_min = find_next_min_liter_index(i)
    if next_min == -1:
        print("min")
        print("next min : ", next_min)
        print(road_list[i:])
        sum_len = sum(road_list[i:])
        result += sum_len * L
        i = next_min
    else:
        print("else")
        print("next min : ", next_min)
        print("road : ", road_list[i:next_min])
        print("L : ", L)
        sum_len = sum(road_list[i:next_min])
        result += sum_len * L
        break


print(result)