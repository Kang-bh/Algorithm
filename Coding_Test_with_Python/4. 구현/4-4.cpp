#include <iostream>
using namespace std;

int N, M; // row col
int location_x, location_y, direction;

int direction_x[4] = {0, 1, 0, -1};
int direction_y[4] = {-1, 0, 1, 0};

int **map;
int answer = 1;

void setMap(int row, int col) {
    map = new int*[row];
    for (int i = 0; i < row; i++) {
        map[i] = new int[col];
    }
}

void print() {
    for (int i = 0 ; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
}


void setGoneLocation(int y, int x) {
    map[y][x] = 2;
    print();
}

void input() {
    // 맵 생성 
    cin >> N >> M;
    setMap(N, M);

    cin >> location_x >> location_y >> direction;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
        }
    }

    setGoneLocation(location_y, location_x);

}

bool checkMapRange(int x, int y) {
    if (x < 0 || x >= M || y < 0 || y >= N) {
        return false;
    }
    return true;
}

void setDirection (int &direction) {
    direction--;
    if (direction == -1) {
        direction = direction+4;
    }
}

bool canMove() {
    int count = 4;
    while(count != 0) {
        
        int target_location_x = location_x + direction_x[direction];
        int target_location_y = location_y + direction_y[direction];

        if (checkMapRange(target_location_x, target_location_y) && map[target_location_y][target_location_x] == 0) {
            // todo : functional 
            location_x = target_location_x;
            location_y = target_location_y;
            setGoneLocation(location_y, location_x);
            return true;
        }        

        setDirection(direction);
        count--;
    }
    return false;
}

void solve() {
    while (canMove()) {
        answer++;
    }
}

int main() {

    input();
    
    solve();
    cout << answer << endl;

    return 0;
}