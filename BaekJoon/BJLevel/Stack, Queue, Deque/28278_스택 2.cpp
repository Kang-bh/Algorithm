#include <iostream>
using namespace std;

class Stack {
    private :
        int numbers[1000000];
        int len = 0;
    
    public : 
        void push(int num);
        void pop();
        void top();
        void isEmpty();
        void length();
};

void Stack::push(int num) {
    numbers[len] = num;
    len++;
}

void Stack::pop() {
    if (len == 0) {
        cout << -1 << '\n';
    } else {
        cout << numbers[len-1] << '\n';
        len--;
    }
}

void Stack::top() {
    if (len == 0) {
        cout << -1 << '\n';
    } else {
        cout << numbers[len-1] << '\n';
    }
}

void Stack::isEmpty() {
    if (len == 0) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }
}

void Stack::length() {
    cout << len << '\n';
}

Stack stack = Stack();

void solve (int functionNumber, int param) {
    switch (functionNumber) {
        case 1 : 
            stack.push(param);
            break;
        case 2 : 
            stack.pop();
            break;
        case 3 : 
            stack.length();
            break;
        case 4 :
            stack.isEmpty();
            break;
        case 5 : 
            stack.top();
            break;
    }
}

void input(int N) {
    cin.tie(0)->sync_with_stdio(0);
    int functionNumber;
    int param = -1;
    for (int i = 0; i < N; i++) {
        cin >> functionNumber;
        if (functionNumber == 1) {
            cin >> param;
        }
        solve(functionNumber, param);
    }
}

int main () {

    int N;
    cin >> N;
    input(N);

    return 0;
}