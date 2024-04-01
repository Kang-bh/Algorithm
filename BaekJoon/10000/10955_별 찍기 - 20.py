n = int(input())

def star_pattern(n : int) -> str:
    for i in range(0, n):
        print("*" + " ", end="")
    print(end = "\n")
def solve(n : int) -> str:
    for i in range(1, n + 1):
        if i % 2 == 0:
            print(" ", end="")
        star_pattern(n)


solve(n)