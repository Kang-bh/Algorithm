from collections import deque

N, K = map(int, input().split())

queue = deque()

for i in range(1, N+1):
    queue.append(i)

def solve(N:int, K:int, queue):
    print("<", end="")   
    while len(queue) != 0:
        for i in range(K-1):
            queue.append(queue.popleft())

        num = queue.popleft()
        if len(queue) == 0:
            print(num, end="")
            break
        else:
            print(str(num) + ", ", end="")



    print(">")


solve(N, K, queue)