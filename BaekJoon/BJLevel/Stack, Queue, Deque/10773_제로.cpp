#include <iostream>
#include <stack>
using namespace std;

stack <int> accountBook;


void input(int K) {
    int num;
    for (int i = 0; i < K; i++) {
        cin >> num;
        
        if (num == 0) {
            accountBook.pop();
            continue;
        }
        
        accountBook.push(num);

    }
}

void solve() {
    int totalNumber = 0;

    while (!accountBook.empty()) {
        totalNumber += accountBook.top();
        accountBook.pop();
    }

    cout <<  totalNumber << endl;
}

int main() {

    int K;
    cin >> K;
    input(K);
    solve();

    return 0;
}