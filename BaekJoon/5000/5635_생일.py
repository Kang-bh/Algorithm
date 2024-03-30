
birth_list = []

student_count = int(input())

for i in range(student_count):
    name, day, month, year = input().split()
    birth = []
    birth.append(name)
    birth.append(int(year))
    birth.append(int(month))
    birth.append(int(day))
    birth_list.append(birth)

sorted_birth_list = sorted(birth_list, key = lambda x : (x[1], x[2], x[3]))

print(sorted_birth_list[-1][0])
print(sorted_birth_list[0][0])