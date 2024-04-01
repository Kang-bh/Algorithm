test_case = int(input())

for i in range(0, test_case):
    total_price = 0
    car_price = int(input())
    option_count = int(input())
    total_price += car_price

    for j in range(0, option_count):
        q, option_price = map(int, input().split())
        total_price += q * option_price

    print(total_price)