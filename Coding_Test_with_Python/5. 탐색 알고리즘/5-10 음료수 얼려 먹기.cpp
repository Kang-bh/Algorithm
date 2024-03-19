// N row
// M col
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define visited 2;

int answer = 0;
int row, col;
string row_numbers;

int **map;

void setData(int row, int col) {
    map = new int*[row];
    for (int i = 0; i < row; i++) {
        map[i] = new int[col];
    }
}

void setRowNumber(int row, string numbers) {
    for (int i = 0; i < numbers.length(); i++) {
        map[row][i] = numbers[i] - '0'; // char to in
    }
}


void print() {
    for (int i = 0 ; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
}

void input() {
    cin >> row >> col;
    setData(row, col);

    for (int i = 0; i < row; i++) {
        cin >> row_numbers;
        setRowNumber(i, row_numbers);
        print();
    }
}


void setVisitMap(int visit_row, int visit_col) {
    map[visit_row][visit_col] = visited;
}

bool checkMapRange(int target_row, int target_col) {
    if (target_row < 0 || target_row >= row || target_col < 0 || target_col >= col) {
        return false;
    }

    if (map[target_row][target_col] != 0) {
        return false;
    }
    cout << "true" << endl;
    return true;
}

void dfs(int row, int col) {
    if (checkMapRange(row, col)) {
        setVisitMap(row, col);
        dfs(row-1,  col);
        dfs(row, col-1);
        dfs(row+1, col);
        dfs(row, col+1);
    }
    
}

void solve() {
    cout << "solve" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (map[i][j] == 0) {
                dfs(i, j);
                answer++;
            }
        }
    }
}

// solve 2
/*
시간 지난 후 다시 푼 결과
todo : dfs 활용법 정리할 필요
check_direction_push_data 라는 쓰잘데 없는 함수 생성
위의 solve와 메모리, 속도 측면 어떤 효율성이 지닐 수 있는지 비교
*/
int N, M;

int **arr;
stack<pair<int, int>> stk;

void check_direction_push_data(int row, int col) {
    if (row >= 0 && row < N && col >= 0 && col < M && arr[row][col] == 0) {
        stk.push(make_pair(row, col));
    }
}

void dfs2(int row, int col) {
    arr[row][col] = visit;
    stk.push(make_pair(row, col));
    pair<int, int> p;
    while(!stk.empty()) {
        p = stk.top();
        stk.pop();
        arr[p.first][p.second] = visit;
        check_direction_push_data(p.first+1, p.second);
        check_direction_push_data(p.first, p.second+1);
        check_direction_push_data(p.first-1, p.second);
        check_direction_push_data(p.first, p.second-1);
        cout << "push stk" << endl;
    }
}

void print() {
    for(int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void solve2() {
    arr = new int*[N];
    string row;

    int cnt = 0;

    for (int i = 0; i < N; i++) {
        arr[i] = new int[M];
    }

    for (int i = 0; i < N; i++) {
        cin >> row;
        for (int j = 0; j < M; j++) {
            arr[i][j] = int(row[j]) - 48;
        }
    }

    print();
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] == 0) {
                dfs2(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}


int main() {

    input();
    solve();

    cout << "solve 1 : " << answer << endl;

    cin >> N >> M;
    cout << "solve 2 : " << solve2() << endl;

    return 0;
}