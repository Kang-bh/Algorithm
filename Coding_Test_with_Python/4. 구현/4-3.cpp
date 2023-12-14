#include <iostream>
#include <string>
#include <utility>
using namespace std;


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

int main() {
    string input;
    cin >> input;

    solve(input);

    return 0;
}