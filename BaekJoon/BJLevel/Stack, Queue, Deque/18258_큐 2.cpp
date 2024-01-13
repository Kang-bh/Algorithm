#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 큐 2 : STL 이용 x
class Queue {
    private :
        int numbers[2000000];
        int head = 0;
        int rear= 0;

    public :
        void push(int num);
        void pop();
        void size();
        void empty();
        void front();
        void back();
};

void Queue::push(int num) {
    numbers[rear] = num;
    rear++;
}

void Queue::pop() {
    if (rear-head) {
        cout << numbers[head] << "\n";
        head++;
    } else {
        cout << -1 << "\n";
    }
}

void Queue::size() {
    cout << rear-head << "\n";
}

void Queue::empty() {
    if (rear - head){
        cout << 0 << "\n";
    } else {
        cout << 1 << "\n";
    }
}

void Queue::front() {
    if (rear - head) {
        cout << numbers[head] << "\n";
    } else {
        cout << -1 << "\n";
    }
}

void Queue::back() {
     if (rear - head) {
        cout << numbers[rear-1] << "\n";
    } else {
        cout << -1 << "\n";
    }
}

Queue queue = Queue();

void solve(string function, int param) {
    // str 바로 function 일치 시키기
    if (function == "push") {
        queue.push(param);
    } else if (function == "pop") {
        queue.pop();
    } else if (function == "size") {
        queue.size();
    } else if (function == "empty") {
        queue.empty();
    } else if (function == "front") {
        queue.front();
    } else if (function == "back") {
        queue.back();
    }
}

void input(int N) {
    string str;
    for (int i = 0; i < N; i++) {
        cin >> str;
        // todo : 주어지는 명령 외에 내려오는 경우 예외처리

        if (str == "push"){
            int param; // todo : c++ 메모리 해제 영역 블로그 정리
            cin >> param;
            solve(str, param);
            continue;
        }
        solve(str, -1); // todo : 좀 더 깔끔히 짤 방법 고려 
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