T = int(input())

for i in range(0, T):
    N = int(input())
    total_credit = 0
    total_score = 0
    for j in range(0, N):
        C, G = input().split()
        total_credit += int(C)
        total_score += float(G) * int(C)
    
    print(("{0} {1:.1f}").format(total_credit, total_score/total_credit))