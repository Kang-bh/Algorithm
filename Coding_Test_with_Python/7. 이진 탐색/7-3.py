# 이진 탐색 소스코드 구현(재귀)
def binary_search(array, target, start, end):
    if start > end:
        return None
    mid = (start+end)//2
    if array[mid] < target: # 중간값보다 큰 경우
        start = mid+1
        return binary_search(array, target, start, end)
    elif array[mid] > target: # 중간값보다 작은 경우
        end = mid-1
        return binary_search(array, target, start, end)
    else:
        return mid

print("원소의 개수, 찾고자하는 문자열 입력받기")
n, target = list(map(int, input().split()))
print("전체 원소 입력받기")
array = list(map(int, input().split()))

# 이진 탐색 수행 결과 출력
result = binary_search(array, target, 0, n-1)
if result == None:
    print("원소가 존재하지 않습니다.")
else:
    print(result+1)
