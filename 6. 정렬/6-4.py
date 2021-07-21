array = [5, 7, 9, 0, 3, 1, 6, 2, 4, 8]
#퀵 정렬 (인덱스로 정의)

def quick_sort(array, start, end):
    if start >= end:
        return
    pivot = start
    # 왼쪽 오른쪽 정의
    left = start + 1
    right = end
    # 서로 만날때까지 돌리기
    while True:
        while left < end and array[left] <= array[pivot]:  # pivot 보다 큰 값
            left += 1
        while right > start and array[right] >= array[pivot]:  # pivot 보다 작은 값
            right -= 1
        if left >= right:
            array[start], array[right] = array[right], array[start]
            break
        array[left], array[right] = array[right], array[left]
    quick_sort(array, start, right-1)
    quick_sort(array, right+1, end)

quick_sort(array, 0, len(array)-1)
print(array)