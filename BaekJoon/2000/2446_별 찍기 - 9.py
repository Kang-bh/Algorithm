n = int(input())


for i in range(n, 0, -1):
    multiply_star_number = 2*i - 1
    print(" " * (n - i) + "*" * multiply_star_number, end="\n")

for i in range(2, n+1):
    multiply_star_number = 2*i - 1
    print(" " * (n - i) + "*" * multiply_star_number, end="\n")

