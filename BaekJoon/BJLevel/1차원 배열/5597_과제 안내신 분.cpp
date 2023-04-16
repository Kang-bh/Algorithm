#include <iostream>
using namespace std;

int total_number = 28;
bool number_array[31] = { 0, };

int main() {

    int data;
    for (int i = 0; i < 28; i++) {
        cin >> data;
        number_array[data] = true;
    }

    for (int i = 1; i <= 30; i++) {
        if (number_array[i] == false) {
            cout << i << endl;
        }
    }
}