#include <iostream>
#include <string>
#include <utility>
using namespace std;


// solve 1

int chess[8][8]; // 횡(수) 열(문자) 

char rows[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};;
char columns[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
pair<int, int> moves[8] = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}}; // 행 열

int row;
int column;

void setData(string input) {
    for (int i = 0; i < 8; i++) {
        if (input[1] == rows[i]) {
            row = i;
        }

        if (input[0] == columns[i]) {
            column = i;
        }
    }
}

bool checkRange (int location) {
    if (location < 0 || location > 7) {
        return false;
    }
    return true;
}

void solve(string input) {
    int count = 0;
    
    setData(input);

    for (int i = 0; i < 8; i++){
        if (checkRange(row + moves[i].first) && checkRange(column + moves[i].second)) { 
            count++;
        }
    }

    cout << count << endl;
}

// solve2
int location_x; // col
int location_y; // row
int dx[8] = {2, 2, 1, -1, -2, -2, 1, -1};
int dy[8] = {1, -1,-2, -2, -1, 1, 2, 2}; 

void convert_to_index(string str) {
    location_x = int(str[0]) - 96;
    location_y = int(str[1]) - 48;
}

bool check_valid_map (int row, int col) {
    if (row < 1 || row > 8 || col < 1 || col > 8) {
        return false;
    }

    return true;
}

void solve2(string str) {
    int cnt = 0;
    int next_y, next_x;

    convert_to_index(str);

    for (int i = 0; i < 8; i++) {

        next_y = location_y + dy[i];
        next_x = location_x + dx[i];

        if(check_valid_map(next_y, next_x)) {
            cnt++;
        }
    }

    cout << cnt << endl;
    
}

int main() {
    string input;
    cin >> input;

    cout << "solve 1 : ";
    solve(input);
    cout << "solve 2 : ";
    solve2(input);

    return 0;
}   