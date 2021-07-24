# 이진 탐색 이용
def binary_search(array, target, start, end):
    # 범위 넘어갈 시
    if start > end:
        return False
    # 중간 값 정의
    mid = (start + end) // 2
    if target == array[mid]: # 같을 시
        return True
    elif target < array[mid]: # target이 더 작을 시
        return binary_search(array, target, start, mid-1)
    else: # target이 더 클 시
        return binary_search(array, target, mid+1, end)


thing = int(input())
thing_list = list(map(int, input().split()))
thing_list.sort()
print(thing_list)

find = int(input())
find_list = list(map(int, input().split()))


for data in find_list:
    result = binary_search(thing_list, data, 0, thing-1)
    if result == True:
        print("yes", end=" ")
    else:
        print("no", end=" ")