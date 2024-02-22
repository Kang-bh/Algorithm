#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

char getBaseNumber(int number) {

    if (number < 10) {
        return number + '0';
    }

    return char(number + 55);
}

void solve(long long int number, int base) {

    vector<char> result;

    long long int quotient = number;
    long long int remainder = 0;
    while (quotient >= base) {
        remainder = quotient % base;
        quotient = quotient / base;
        result.push_back(getBaseNumber(remainder));
    }

    result.push_back(getBaseNumber(quotient));

    for (auto iter = result.end() -1; iter >= result.begin(); iter--) {
        cout << *iter;
    }
    cout << endl;
}

int main() {

    long long int number;
    int base;

    cin >> number >> base;

    solve(number, base);

    return 0;
}