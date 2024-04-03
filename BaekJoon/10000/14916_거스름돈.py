n = int(input())
result = 0

while n % 5 != 0 and n >= 5:
    n -= 2
    result += 1

result += int(n/5)
n -= 5 * int(n/5)

if n % 2 != 0:
    print(-1)
else :
    result += int(n/2)
    print(result)