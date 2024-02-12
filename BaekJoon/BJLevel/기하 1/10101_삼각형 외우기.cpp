#include <iostream>
using namespace std;

void solve(int angle1, int angle2, int angle3) {
    if (angle1 + angle2 + angle3 == 180) {
        if (angle1 == 60 && angle2 == 60 && angle3 == 60) {
            cout << "Equilateral" << endl;
        } else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
            cout << "Isosceles" << endl;
        } else {
            cout << "Scalene" << endl;
        }
    } else {
        cout << "Error" << endl;
    }
}

int main () {
    int a, b, c;

    cin >> a >> b >> c;

    solve(a, b, c);
}