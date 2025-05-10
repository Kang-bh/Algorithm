
A = list()
B = list()

for i in range(0, 2):
    # A 이후 B
    N, M = map(int, input().split(" "))
    for j in range(0, N):
        data = list(map(int, input().split(" ")))
        # print(f"data : {data}")
        if i == 0 : A.append(data)
        elif i == 1 : B.append(data)


# print(f"A : \n {A}")
# print(f"B : \n {B}")

result = list()

for i in range(0, len(A)):
    data = list()

    for j in range(0, len(B[0])):
        C = 0
        for k in range(0, len(A[0])):
            C += A[i][k] * B[k][j]

        data.append(C)

    result.append(data)

# 출력

for l in result:
    for num in l:
        print(num, end=" ")
    print()

# print(f"result : \n {result}")