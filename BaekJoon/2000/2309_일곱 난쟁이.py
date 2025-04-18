from itertools import combinations

key_list = list()

for _ in range(9):
    num = int(input())
    key_list.append(num)

# 7개 뽑기
possible_answers = combinations(key_list, 7)

for data in possible_answers:
    if sum(data) == 100:
        answer = sorted(list(data))
        break
    
for data in answer:
    print(data)