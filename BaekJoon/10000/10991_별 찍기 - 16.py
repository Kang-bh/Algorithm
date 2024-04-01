n = int(input())

def star_pattern(n : int) -> str:
    for i in range(0, n):
        print("* ", end="")
    print(end="\n")

for i in range(1, n+1):
    print(" " * (n-i), end="")
    star_pattern(i)