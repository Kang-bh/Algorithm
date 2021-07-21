# Python sorted 함수
# 새로운 리스트 반환
array = [7, 5, 9, 0, 3, 1, 6, 2, 9, 1, 4, 8, 0, 5, 2]

result = sorted(array)
print(result)
print("-"* 50)
# sort 함수
# 리스트 반환 x 내부 원소 정렬
array.sort()
print(array)
print("-"* 50)
# Python 정렬 라이브러리에서 key를 활용
array = [('바나나', 2), ('사과', 5), ('당근', 3)]
def setting(data):
    return data[1]
result = sorted(array, key=setting)
print(result)