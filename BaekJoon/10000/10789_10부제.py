n = int(input())

result = 0

list_car_n = [int(x) for x in input().split()]

for car_n in list_car_n:
    if car_n == n:
        result += 1

print (result)