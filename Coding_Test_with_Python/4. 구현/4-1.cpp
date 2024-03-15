#include <iostream>
#include <string>
using namespace std;

int x = 1;
int y = 1;
int N;

// bool checkDistance (char direction) {
//     if (direction == 'R')
// }

void move(char direction) {
    
    if (direction == 'R') {
        if (x == N) {
            return;
        }
        x++;
    } else if (direction == 'L') {
        if (x == 1) {
            return;
        }
        x--;
    } else if (direction == 'U') {
        if (y == 1) {
            return;
        }
        y--;
    } else if (direction == 'D') {
        if (y == N) {
            return;
        }
        y++;
    }
}

#include <iostream>
#include <utility>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
// ~17

map <char, int> table = { {'L', 0}, {'R', 1}, {'U', 2}, {'D', 3} };

int location_x = 1;
int location_y = 1;

int direction_y[4] = { -1, 1, 0, 0 };
int direction_x[4] = { 0, 0, -1, 1 };

void solve(int N, string str) {

    int idx, next_location_x, next_location_y;

    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    for (int i = 0; i < str.length(); i++) {
    
        idx = table[str[i]];

        next_location_x = location_x + direction_x[idx];
        next_location_y = location_y + direction_y[idx];

        if (next_location_x < N + 1 && next_location_x > 0)
            location_x = next_location_x;
        if (next_location_y < N + 1 && next_location_y > 0)
            location_y = next_location_y;

    }

    cout << location_x << " " << location_y << endl;

}


int main () {

    cin >> N;
    string movePlan;
    cin.ignore();
    getline(cin, movePlan);

    for (int i = 0; i < movePlan.length(); i++ ) {
        move(movePlan[i]);
    }

    cout << y << " " << x << endl;

    solve(N, movePlan);

    return 0;
}