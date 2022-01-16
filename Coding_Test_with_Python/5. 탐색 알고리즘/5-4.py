
def recursive_fuction(i):
    # 100번째 출력했을 떄 종료되도록 종료 조건 명시
    if i == 100:
        return # python 에서 return 하면 종료.
    print(i, '번쪠 재귀 함수에서', i + 1, '번째 재귀 함수를 호출합니다.')
    recursive_fuction(i + 1)
    print(i, '번째 재귀 함수를 종료합니다.')

recursive_fuction(1)