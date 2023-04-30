#include <iostream>
using namespace std;
#define STAR "*"

void print (const char* str, int num) {
    if (str == " ") {
        for (int i = 0; i < num; i++){
            cout << str;
        }
    } else if (str == STAR) {
        for (int i = 0; i < 2 * num - 1; i++){
            cout << str;
        }
        cout << endl;
    }
}

void loggingMiddleLine (int N) {
    print(STAR, N);
}

void loggingLines(int N) {
    for (int i = 1; i < N; i++) {
        print(" ", N - i);
        print(STAR, i);
    }
    loggingMiddleLine(N);
    for (int i = N-1; i >= 0; i--) {
        print(" ", N - i);
        print(STAR, i);
    }
}

int main() {

    int N;
    cin >> N;

    loggingLines(N);

    return 0;
}