# 자료형에서 바로 찾기
thing = int(input())
thing_list = list(map(int, input().split()))

find = int(input())
find_list = list(map(int, input().split()))

for data in find_list:
    if data in thing_list:
        print("yes", end = " ")
    else:
        print("no", end = " ")