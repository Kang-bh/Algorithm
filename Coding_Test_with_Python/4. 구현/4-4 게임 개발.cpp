#include <iostream>
using namespace std;
#define GONE 2;

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
// solve1
void solve() {
    while (canMove()) {
        answer++;
    }
}


//solve2
int N2, M2;
int user_direction, user_location_row, user_location_col;
int result = 1;

// 북 동 남 서
int dx[4] = {0, 1, 0, -1 }; 
int dy[4] = {1, 0, -1, 0 };

// vector<vector<int>> map;
int** map2;

void print2() {
    cout << "==============print==============" << endl;
    for (int i = 0; i < N2; i ++) {
        for (int j = 0; j < M2; j++) {
            cout << map2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "=================================" << endl;

}

void set_user_data() {
    cin >> user_location_col >> user_location_row >> user_direction;
}

void set_user_next_location() {
    user_direction -= 1;

    if (user_direction < 0) {
        user_direction += 4;
    }
}

void set_gone_location(int row, int col) {
    map2[row][col] = GONE;
}

bool check_can_move() {
    int next_location_x;
    int next_location_y;
    cout << "check can move" << endl;
    next_location_x = user_location_col + dx[user_direction-1];
    next_location_y = user_location_row + dy[user_direction-1];

    if (next_location_x >= M || next_location_x < 0 || next_location_y >= N || next_location_y < 0) {
        return false;
    }

    return !map2[next_location_y][next_location_x];
}

bool check_four_directions() {

    int next_location_x;
    int next_location_y;
    cout << "==== check four directions ====" << endl;
    for (int i = 0; i < 4; i++) {
        next_location_y = user_location_row + dy[i];
        next_location_x = user_location_col + dx[i];

        if (next_location_x < 0 || next_location_x >= M2 || next_location_y < 0 || next_location_y >= N2) {
            cout << "continue" << endl;
            continue;
        }
        // cout << "=======================================" << endl;
        // cout << "next_location_x : " << next_location_x << " next_location_y : " << next_location_y << endl;
        // cout << map[next_location_y][next_location_x] << endl;
        // cout << "=======================================" << endl;
        if (map2[next_location_y][next_location_x] == 0) {
            // cout << "true" << endl;
            return true;            
        }
    }

    // cout << "false" << endl;
    return false;
}

bool check_finish() {
    cout << "==== check finish ====" << endl;
    int reverse_direction = user_direction - 2;
    if (reverse_direction < 0) {
        reverse_direction += 4;
    }
    int next_location_x = user_location_col + dx[reverse_direction];
    int next_location_y = user_location_row + dy[reverse_direction];

    if (map2[next_location_y][next_location_x] == 0) {
        cout << "true" << endl;
        cout << "===================" << endl;
        return false;
    }
    cout << "false" << endl;
    cout << "===================" << endl;
    return true;
    
}

void set_map () {
    // 1 : 바다
    // 0 : 육지
    // 2 : 방문
    // vector<int> tmp;
    map2 = new int* [N2];
    for (int i = 0; i < N2; i++) {
        map2[i] = new int[M2];
    }

    int map_data;
    for (int i = 0; i < N2; i++) {
        for (int j = 0; j < M2; j++) {
            cin >> map_data;
            map2[i][j] = map_data;
        }
    }
}

void back_to_previous_location() {
    int reverse_direction = user_direction - 2;
    if (reverse_direction < 0) {
        reverse_direction += 4;
    }

    user_location_col += dx[reverse_direction];
    user_location_row += dy[reverse_direction];

}

void move(){
    user_direction-=1;
    user_location_col += dx[user_direction];
    user_location_row += dy[user_direction];
    cout << "move x :" << user_location_col << " move y : " << user_location_row << " direction : " << user_direction << endl;
    result++;

    set_gone_location(user_location_row, user_location_col);
}

void solve2() {
    int next_direction;
    while(true) {
        if (check_four_directions()) {
            if (check_can_move()) {
                cout << "====move====\n";
                move();
            } else {
                set_user_next_location();
            }
        } else {
            if (check_finish()){
                break;
            }
            back_to_previous_location();
        }
    }

    cout << result << endl;
}

int main() {

    input();
    
    solve();
    cout << "solve 1 : " <<  answer << endl;

    cin >> N2 >> M2;
    set_user_data();
    set_map();
    cout << "solve 2 : ";
    solve2();
    return 0;
}