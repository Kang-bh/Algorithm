#include <iostream>
using namespace std;

bool exception(int length) {
    if (length <= 100 || length >= -100) {
        return false;
    }
}

void solve(int array[], int number, int length) {
    int count = 0;

    for (int i = 0; i < length; i++) {
        if (array[i] == number)
            count++;
    }

    cout << count << endl;
}

int main () {

    int length, number;

    cin >> length;

    int *array = new int[length];
    for (int i = 0; i < length; i++) {
        cin >> array[i];
    }

    cin >> number;

    solve(array, number, length);
    delete[] array;

    return 0;
}