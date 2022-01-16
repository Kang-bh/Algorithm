# 한 번 계산된 결과를 메모이제이션하기 위한 리스트 초기화
d = [0] * 100

def fibo(n):
    print('f(' + str(n) + ')', end=" ")
    if n <= 2:
        return 1
    if d[n] != 0:
        return d[n]
    d[n] = fibo(n-1) + fibo(n-2)
    return d[n]

fibo(6)