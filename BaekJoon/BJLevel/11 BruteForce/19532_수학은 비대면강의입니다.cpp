#include <iostream>
using namespace std;

int a, b, c, d, e, f;
int x, y;

void solve(){
    if (a == d && b == e) {
        cout << "Exception with input data" << endl;
    }
    else if (a == 0) {
        y = c/b;
        x = (f - e * y) / d;
        return;
    } else if (d == 0) {
        y = f/e;
        x = (c - b * y) / a;
        return;
    } else if (b == 0) {
        x = c/a;
        y = (f - d * x) / e;
        return;
    } else if (e == 0) {
        x = f/d;
        y = (c - a * x) / b;
        return;
    } else {
        x = (c*e - f*b) / (a*e - b*d);
        y = (c - a*x) / b;
        return;
    }
}

int main () {
    cin >> a >> b >> c >> d >> e >> f;

    solve();

    cout << x << " " << y << endl;

    return 0;
}