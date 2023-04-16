#include <iostream>
using namespace std;


int main() {

    int N, M;
    int i, j, k;

    cin >> N >> M;

    int *array = new int[N] { 0, };

    for(int temp = 0; temp < M; temp++) {
        cin >> i >> j >> k;
        for (int data = i - 1; data < j; data++) {
            array[data] = k;
        }
    }

    for (int temp = 0; temp < N; temp++) {
        if (temp == N-1) {
            cout << array[temp];
            break;
        }
        cout << array[temp] << " ";
    }

    return 0;
}