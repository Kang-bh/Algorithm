#include<iostream>
#include<queue>
using namespace std;

int n, m;
int graph[201][201];

// 이동할 네 가지 방향 정의 (상, 하, 좌, 우) 
int direction_x[] = {-1, 1, 0, 0};
int direction_y[] = {0, 0, -1, 1};

int bfs(int x, int y) {
    // 큐(Queue) 구현을 위해 queue 라이브러리 사용 
    queue<pair<int, int> > q;
    q.push({x, y});
    // 큐가 빌 때까지 반복하기 
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        // 현재 위치에서 4가지 방향으로의 위치 확인
        for (int i = 0; i < 4; i++) {
            int direction_x = x + direction_x[i];
            int direction_y = y + direction_y[i];

            if (direction_x < 0 || direction_x >= n || direction_y < 0 || direction_y >= m) continue;

            if (graph[direction_x][direction_y] == 0) continue;

            if (graph[direction_x][direction_y] == 1) {
                graph[direction_x][direction_y] = graph[x][y] + 1;
                q.push({nx, ny});
            } 
        } 
    }
    // 가장 오른쪽 아래까지의 최단 거리 반환
    return graph[n - 1][m - 1];
}

int main(void) {
    // N, M을 공백을 기준으로 구분하여 입력 받기
    cin >> n >> m;
    // 2차원 리스트의 맵 정보 입력 받기
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> graph[i][j];
        }
    }
    // BFS를 수행한 결과 출력
    cout << bfs(0, 0) << '\n';
    return 0;
}