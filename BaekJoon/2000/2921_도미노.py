n = int(input())

# 중복 조합
# todo : module 정리


num_list = [i for i in range(0, n+1)]
# 1. using module
from itertools import combinations_with_replacement

result = 0

for cwr in combinations_with_replacement(num_list, 2):
    result += cwr[0]
    result += cwr[1]

print(result)

# 2. my solution
result_ver2 = 0
for i in range(0, n + 1):
    for j in range(i, n+1):
        result_ver2 += (num_list[i] + num_list[j])
    

print(result_ver2)

# todo : generator