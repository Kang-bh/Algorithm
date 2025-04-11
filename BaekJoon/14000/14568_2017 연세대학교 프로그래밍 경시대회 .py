candyCount = int(input())

C, result = 2, 0

while True: # A가 B보다 두개 이상이기때문
    if C >= candyCount - 2:
        break

    remainCandyCount = candyCount - C
    
    # 할당하기
    for B in range(1, remainCandyCount):
        A = remainCandyCount - B

        if A >= B + 2:
            print(f"A : {A}, B : {B}, C : {C}")
            result+=1
        else:
            break

    C += 2
    
print(result)