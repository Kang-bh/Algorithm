array = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]

for i in range(len(array)): # 최소값 담아둘 변수
    temp = array[i]
    for j in range(i+1, len(array)):
        if temp > array[j]: # 작을 시
            temp = array[j]
            index = j
    if array[i] > temp:
        array[index] = array[i]
        array[i] = temp

print(array)