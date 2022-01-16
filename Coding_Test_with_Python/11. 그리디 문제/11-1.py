# 공포감 수 만큼 사람빼서 그룹만들기
def count_group(data):
    max = data[-1]
    for _ in range(max):
        data.pop()
num = int(input())

data = list(map(int, input().split()))
data.sort() # 마지막 인덱스값이 최대 공포감

count = 0

while len(data) != 0:
    count_group(data)
    count += 1

print(count)
