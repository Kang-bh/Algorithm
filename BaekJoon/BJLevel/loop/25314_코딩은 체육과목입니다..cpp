#include <iostream>
using namespace std;

void solve (int num) {
    for (int i = 0; i < num; i++) {
        cout << "long ";
    }
    cout << "int" << endl;
}

int main() {
    int num;

    cin >> num;

    if (num > 1000 || num % 4 != 0) {
        cout << "Out of range Or Check the number is multiples of 4";
    }

    solve(num/4);

    return 0;
}