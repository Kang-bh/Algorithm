dp = [0] * 46

n = int(input())

def fibo(n):
    if dp[n] != 0:
        return dp[n]
    elif n == 1 or n == 2 :
        dp[n] = 1
        return 1
    
    dp[n] = fibo(n-1) + fibo(n-2)
    return dp[n]

print(fibo(n))