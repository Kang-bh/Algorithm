#include <iostream>
using namespace std;



void solve (int n) {
    int x, y;
    int max_x, max_y, min_x, min_y;
    cin >> x >> y;
    max_x = x;
    min_x = x;
    max_y = y;
    min_y = y;

    if (n == 1) {
        cout << 0 << endl;
        return;
    } 

    for(int i = 0; i < n - 1; i++) {
        cin >> x >> y;
        if (max_x < x) {
            max_x = x;
        } 

        if (max_y < y) {
            max_y = y;
        } 

        if (min_y > y) {
            min_y = y;
        }

        if (min_x > x) {
            min_x = x;
        }

    }

    cout << (max_x-min_x) * (max_y-min_y) << endl;
}

int main() {
    int n;

    cin >> n;
    solve(n);    

    return 0;
}