n = int(input())

check = False
list_pro = [int(x) for x in input().split()]
result = 0
cnt = 0

for pro in list_pro:
    if pro == 1:
        cnt += 1 
        if not check : 
            check = True
        result += cnt
    elif pro == 0:
        check = False
        cnt = 0

print(result)
