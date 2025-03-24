num_str = input()

result = int(num_str[0])

plus_num = [0, 1, '0', '1']

for num in num_str[1:]:
    if result in plus_num or num in plus_num:
        result += int(num)
    else:
        result *= int(num)

print(result)