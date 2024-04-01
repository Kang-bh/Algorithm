import sys

input = sys.stdin.readline

n = int(input())
result = 0
for i in range(0, n):
    plug = int(input())

    result += plug

result -= (n-1)
print(result)