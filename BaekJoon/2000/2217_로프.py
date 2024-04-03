import sys
n=int(sys.stdin.readline())

number_list = [int(sys.stdin.readline().strip()) for i in range(n)]

max_weight = max(number_list)
sorted_number_list = sorted(number_list, reverse=True)

for i in range(2, n+1):
    result = sorted_number_list[i-1] * i
    if max_weight < result:
        max_weight = result

print(max_weight)

# tooo : memory 초과 
# todo : combination function
# todo : 정리 슬라이싱 없으니 시간 빨라짐