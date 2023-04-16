#include <iostream>
using namespace std;


int main() {

    int N, M;
    cin >> N >> M;
    int *array = new int[N + 1];

    for (int t = 1; t <= N; t++) {
        array[t] = t;
    }

    int i , j;

    for (int l = 0; l < M; l++) {
        cin >> i >> j;

        int start = i;
        int end = j;
        int count = (j-i+1)/2;

        if (i == j) {
            continue;
        }

        while (count != 0) {
            int temp = array[start];
            array[start] = array[end];
            array[end] = temp;

            start++;
            end--;
            count--;
        }
    }

    for (int i = 1; i <= N; i++) {
        if(i == N) {
            cout << array[i];
            break;
        }

        cout << array[i] << " ";
    }

}