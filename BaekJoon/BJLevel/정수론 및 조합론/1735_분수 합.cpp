#include <iostream>
using namespace std;

int gcd(int A,  int B) {
    int num1 = A, num2 = B;
    int num3;
    while (num2) {
        num3 = num1 % num2;
        num1 = num2;
        num2 = num3;
    }

    return num1;
}

int lcm(int A, int B) {
    return (A * B) / gcd(A, B);
}

int main () {
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    int lcm_number = lcm(B, D);

    int molecule; // 분자
    int numerator; // 분모

    molecule = A * (lcm_number / B) + C * (lcm_number / D);
    numerator = lcm_number;

    int gcd_number = gcd(molecule, numerator);

    cout << molecule / gcd_number << " " << numerator / gcd_number << endl;

    return 0;
}