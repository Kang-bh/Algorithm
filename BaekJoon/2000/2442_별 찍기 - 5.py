n = int(input())

for i in range(1, n+1):
    multiply_number = 2*i - 1
    print((n-i) * ' ' + '*' * multiply_number, end="\n")
