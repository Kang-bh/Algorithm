#include <iostream>
using namespace std;


// quarter 0.25, dime 0.10, nickel 0.05, penny 0.001
void solve(int c) {
    int quarter = 0, dime = 0, nickel = 0, penny = 0;
    int change = c;
    if (change / 25 != 0) {
        quarter += change / 25;
        change %= 25;
    } 
    if (change / 10 != 0) {
        dime += change / 10;
        change %= 10;
    } 
    if (change / 5 != 0) {
        nickel += change / 5;
        change %= 5;
    }    
    penny = change;

    cout << quarter << " " << dime << " " << nickel << " " << penny << endl;

}

int main() {

    int T, C;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> C;
        solve(C);
    }

    return 0;
}