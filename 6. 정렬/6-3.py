array = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]

for i in range(1, len(array)):
    first_index = 0
    for j in range(first_index, i): # 정렬된 데이터 비교
        if array[j] > array[i]:
            array[i], array[j] = array[j], array[i]
        elif array[j] >= array[i]:
            break

print(array)