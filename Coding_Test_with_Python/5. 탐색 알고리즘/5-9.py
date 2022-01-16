from collections import deque

queue = deque()

#BFS 생성
def BFS(graph, v, visted):
    visted[v] = True
    print(v, end= ' ')
    # 큐에 추가
    for i in graph[v]:
        if not visted[i]:
            queue.append(i)
            visted[i] = True # 안 할시 queue 안에 중복으로 들어감
    while queue:
        BFS(graph, queue.popleft(), visted)


# 그래프 생성
graph = [
    [],
    [2, 3, 8], #1
    [1, 7], #2
    [1, 4, 5], #3
    [3, 5], #4
    [3, 4], #5
    [7], #6
    [2, 6, 8], #7
    [1, 7]  #8
]

# 방문 확인
visited = [False] * 9 # 첫번째 false 쓰레기값

BFS(graph, 1, visited)