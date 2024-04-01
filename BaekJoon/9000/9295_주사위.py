t = int(input())

for i in range(1, t+1):
    first, second = map(int, input().split())

    text = "Case {x}: {sum}"
    sum = first + second
    print(text.format(x = i, sum = sum))
