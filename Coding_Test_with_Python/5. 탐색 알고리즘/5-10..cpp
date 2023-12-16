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

int main() {

    input();
    solve();
    cout << answer << endl;

    return 0;
}