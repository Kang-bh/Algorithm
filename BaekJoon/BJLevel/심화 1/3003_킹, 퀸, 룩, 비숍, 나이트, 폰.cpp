#include <iostream>
using namespace std;


int main() {

    int answer[6];
    answer[0] = 1;
    answer[1] = 1;
    answer[2] = 2;
    answer[3] = 2;
    answer[4] = 2;
    answer[5] = 8;

    int num;

    for (int i = 0; i < 5; i++) {
        cin >> num;

        cout << answer[i] - num << " ";
    }
    cin >> num;
    cout << answer[5] - num << endl;

    return 0;
}