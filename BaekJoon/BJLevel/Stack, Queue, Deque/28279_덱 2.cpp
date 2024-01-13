#include <iostream>
#include <string>
using namespace std;

class Deque {
    private : 
        int numbers[2000001];
        int head = 1000000;
        int tail = 1000001;
    public : 
        void push_front(int num);
        void push_back(int num);
        void pop_front();
        void pop_back();
        void size();
        void empty();
        void front();
        void back();
};

void Deque::push_back(int num) {
    numbers[tail] = num;
    tail++;
}

void Deque::push_front(int num) {
    // for (int i = tail; i > head; i--) {
    //     numbers[i] = numbers[i-1];
    // }
    // tail++;
    numbers[head] = num;
    head--;
}

void Deque::pop_front() {
    if (head == tail-1) {
        cout << -1 << "\n";
    } else {
        cout << numbers[head+1] << "\n";
        head++;
    }
}

void Deque::pop_back() {
    if (head == tail-1) {
        cout << -1 << "\n";
    } else {
        cout << numbers[tail-1] << "\n";
        tail--;
    }
}

void Deque::size() {
    cout << tail - head -1  << "\n";
}

void Deque::empty() {
    if (tail-1 == head) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }
}

void Deque::front() {
    if (tail-1 == head) {
        cout << -1 << "\n";
    } else {
        cout << numbers[head+1] << "\n";
    }
}

void Deque::back() {
    if (tail-1 == head) {
        cout << -1 << "\n";
    } else {
        cout << numbers[tail-1] << "\n";
    }
}

Deque deque = Deque();

void solve (int functionNumber, int param) {
     switch (functionNumber) {
        case 1 : 
            deque.push_front(param);
            break;
        case 2 : 
            deque.push_back(param);
            break;
        case 3 : 
            deque.pop_front();
            break;
        case 4 :
            deque.pop_back();
            break;
        case 5 : 
            deque.size();
            break;
        case 6 :
            deque.empty();
            break;
        case 7 :
            deque.front();
            break;
        case 8 :
            deque.back();
            break;
    } 
}

void input(int N) {
    int functionNumber;
    int param = -1;
    for (int i = 0; i < N; i++) {
        cin >> functionNumber;
        if (functionNumber == 1 || functionNumber == 2) {
            cin >> param;
        }
        solve(functionNumber, param);
    }
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    input(N);

    return 0;
}