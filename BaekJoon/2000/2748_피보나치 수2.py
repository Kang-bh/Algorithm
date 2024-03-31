dp = [0] * 100

def fibo(n : int) -> int:
    if n == 1 or n == 2:
        return 1
    if dp[n] != 0:
        return dp[n]
    dp[n] = fibo(n-1) + fibo(n-2)
    return dp[n]


def solve():
    n = int(input())
    result = fibo(n)
    print(result)

solve()



# dp = [0] * 100

# dp[1] = 1
# dp[2] = 1
# n = 90

# for i in range(3, n+1) :
#     dp[i] = dp[i-1] + dp[i-2]

# input_data = int(input())

# print(dp[input_data])