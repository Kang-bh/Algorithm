def binary_search(array, length, start, end, rice_cake): # target index 찾기(height)
    while start <= end:
        mid = (start + end)//2 # index 가 height 길이
        sum = 0
        for data in rice_cake:
            res = data - mid
            if res <= 0: # 잘린게 0이하 일 시
                continue
            else: # 잘린게 0보다 클 시
                sum += res
        if sum > length:
            start = mid + 1
        elif sum == length:
            return mid
        else:
            end = mid - 1
count, length = map(int, input().split())
rice_cake = list(map(int, input().split()))
height_list=[]
for i in range(max(rice_cake)+1):
    height_list.append(i)
height = binary_search(height_list, length, 1, len(height_list)-1, rice_cake) # 원하는 길이 return

print(height)