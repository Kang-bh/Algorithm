#include <iostream>
using namespace std;

int arr[100000];

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findGCDOfMultipleNumbers(int N) {
    int result = arr[0];

    for (int i = 1; i < N; i++) {
        result = gcd(result, arr[i]);
    }

    return result;
}

void print(int N) {
    for (int i = 0; i < N-1; i++) {
        cout << arr[i] << " ";
    }
}

void solve(int N) {
    int tree, next_tree, result = 0;

    cin >> tree;
    for (int i = 1; i < N; i++) {
        cin >> next_tree;
        arr[i-1] =  next_tree - tree;
        tree = next_tree;
    }

    int gcd_number = findGCDOfMultipleNumbers(N-1);

    for (int i = 0; i < N - 1; i++) {
        result += arr[i] / gcd_number - 1;
    }

    cout << result << endl;
}

int main() {
    int N;

    cin >> N;

    solve(N);

    return 0 ;
}