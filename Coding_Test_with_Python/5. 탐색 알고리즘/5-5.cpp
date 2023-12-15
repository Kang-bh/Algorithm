#include <iostream>
using namespace std;

int factorialIterative (int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int factorialRecursive (int n) {
    if (n <= 1) {
        return 1;
    }

    return n * factorialRecursive(n-1);
}

int main () {
    cout << "반복적으로 구현 : " << factorialIterative(5) << endl; 
    cout << "재귀적으로 구현 : " << factorialRecursive(5) << endl; 
}