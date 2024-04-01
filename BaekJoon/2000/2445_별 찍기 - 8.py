n = int(input())

for i in range(1, n+1):
    print("*" * i + " " * 2 * (n - i) + "*" * i, end="\n")

for j in range(n-1, 0, -1):
    print("*" * j + " " * 2 * (n - j) + "*" * j, end="\n")
