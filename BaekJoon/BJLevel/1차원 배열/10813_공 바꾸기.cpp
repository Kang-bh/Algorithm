#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int *array = new int[N];

    for (int t = 0; t < N; t ++){
        array[t] = t+1;
    }

    int i, j;

    for (int k = 0; k < M; k++) {
        cin >> i >> j;
        int temp = array[i-1];
        array[i-1] = array[j-1];
        array[j-1] = temp;
    }

    for (int data = 0; data < N; data++) {
        if (data == N-1) {
            cout << array[data];
            break;
        }
        cout << array[data] << " ";
    }

    delete[] array;

    return 0;
}