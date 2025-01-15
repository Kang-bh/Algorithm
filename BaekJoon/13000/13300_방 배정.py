import math
N, K = map(int, input().split(' '))

man_list = list()
woman_list = list()

for i in range(6):
    man_list.append(0)
    woman_list.append(0)

# (gender, grade)
# gender 0 -> female, 1 -> male

for i in range(N):
    gender, grade = map(int, input().split(' '))
    
    if gender :
        man_list[grade-1] += 1
    else :
        woman_list[grade-1] += 1

# solve 

result = 0
check_grade = 0

while check_grade != 6:

    result += math.ceil(man_list[check_grade] / K)
    result += math.ceil(woman_list[check_grade] / K)

    check_grade += 1

print(result)
