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

int main () {

    cin >> N;
    string movePlan;
    cin.ignore();
    getline(cin, movePlan);

    for (int i = 0; i < movePlan.length(); i++ ) {
        move(movePlan[i]);
    }

    cout << y << " " << x << endl;

    return 0;
}