def checkNum(num:int) -> bool:
    for i in range(2, 1000001):
        if num % i == 0: # 소인수 존재
            return False
    return True

TC = int(input())

for i in range(TC):
    num = int(input())
    if checkNum(num):
        print("YES")
    else:
        print("NO")

