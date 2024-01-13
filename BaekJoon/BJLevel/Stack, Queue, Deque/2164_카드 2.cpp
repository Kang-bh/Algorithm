#include <iostream>
#include <deque>
using namespace std;

deque <int> cards;

void solve(int N) {
    while(cards.size() != 1) {
        cards.pop_front();
        cards.push_back(cards[0]);
        cards.pop_front();
    }
}

void setQueue(int N) {
    for (int i = 1; i < N+1; i++) {
        cards.push_back(i);
    }
}


int main() {
    int N;
    cin >> N;
    setQueue(N);
    solve(N);

    cout << cards[0] << endl;

    return 0;
}