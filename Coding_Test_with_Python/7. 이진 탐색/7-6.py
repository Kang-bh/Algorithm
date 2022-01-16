# 계수 정렬

thing = int(input())
thing_list = list(map(int, input().split()))
# 8 3 7 9 2
max = max(thing_list)
# 5 7 9

check_list = [False] * (max+1)
for data in thing_list:
    check_list[data] = True

find = int(input())
find_list = list(map(int, input().split()))

for target in find_list:
    if check_list[target] == True:
        print("yes", end=" ")
    else:
        print("no", end=" ")