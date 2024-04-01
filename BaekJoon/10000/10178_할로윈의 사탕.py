t = int(input())

for i in range(0, t):
    c, v = map(int, input().split())

    text = "You get {0} piece(s) and your dad gets {1} piece(s)."
    print(text.format(int(c/v), c%v))
