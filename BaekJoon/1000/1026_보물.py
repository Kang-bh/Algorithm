

def solve(N, A, B):
    sorted_A = sorted(A)
    sorted_B = sorted(B, reverse=True)

    total = 0

    for idx in range(N):
        total += sorted_A[idx] * sorted_B[idx]
    
    print(total)

if __name__ == "__main__":
    N = int(input())

    num_list_a = list(map(int, input().split()))
    num_list_b = list(map(int, input().split()))

    solve(N, num_list_a, num_list_b)

