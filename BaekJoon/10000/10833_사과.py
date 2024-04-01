n = int(input())
result = 0

for i in range(0, n):
    a, b = map(int, (input()).split())

    result += (b % a)

print(result)