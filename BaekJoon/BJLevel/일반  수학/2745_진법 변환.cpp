#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int getNumberFromAlphabet (char alphabet) {
    alphabet = toupper(alphabet);

    if (alphabet < 'A' || alphabet > 'Z') {
        return alphabet - '0';
    }

    return alphabet - 'A' + 10;

}

long long int getBase10Number (int number, int loc, int base) {
    return number * pow(base, loc);
}

void solve(string num, int B) {

    long long int result = 0;

    reverse(num.begin(), num.end());

    long long int  alphabetNumber = 0;

    for (int i = 0; i < num.size(); i++) {
        alphabetNumber = getNumberFromAlphabet(num[i]);
        result += getBase10Number(alphabetNumber, i, B);
    }

    cout << result << endl;

}

int main() {

    int B;
    string num;

    cin >> num >> B;

    solve(num, B);

    return 0;
}