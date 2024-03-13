// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// #include <queue>
// #define STACK 1
// #define QUEUE 0

// // todo :동적할당 이용한 메모리 최소화
// int typeOfDataStructure[100001];
// stack <int> tempDataStore;
// queue <int> queueStack;

// void setDataStructure(int N) {
//     int type;
//     int number;
//     for (int i = 1; i < N + 1; i++) {
//         cin >> type;
//         typeOfDataStructure[i] = type;
//     }

//     for (int i = 1; i < N + 1; i++) {
//         cin >> number;
//         if (typeOfDataStructure[i] == QUEUE) {
//             tempDataStore.push(number);
//         }
//     }
    
// }

// void solve(int M) {
    
//     int number;
//     for (int i = 0; i < M; i++) {
//         cin >> number;

//         queueStack.push(number);

//         cout << queueStack.front() << " ";
//         queueStack.pop();
//     }
//     cout << "\n";
// }

// //  todo : cleancode
// // void solve(int N, int M) {
// //     int popNumber;
// //     int passNumber;

// //     // todo : time check
// //     for (int i = 0; i < M; i++) {
// //         cin >> passNumber;

// //         for (int j = 1; j < N + 1; j++) {
// //             if (typeOfDataStructure[j] == QUEUE) {
// //                 // todo :함수화 필요
// //                 popNumber = queueStack[j];
// //                 queueStack[j] = passNumber;
// //                 passNumber = popNumber;
// //             }
// //         }

// //         cout << passNumber << " ";
        
// //     }

// // }

// int main() {

//     int N, M;
//     cin >> N;
//     setDataStructure(N);

//     cin >> M;
//     solve(M);

//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

bool compare (int a, int b) {
    return (a > b);
}

void solve(int N, int M, int K) {

    int * arr = new int[N];
    int result = 0, cnt = 0, num;

    for (int i = 0; i < N; i++) {
        cin >> num;
        arr[i] = num;
    }

    sort(arr, arr+N, compare);    

    for (int i = 0; i < M; i++) {
        if (cnt == K) { // K 번째 도달
            result += arr[1];
            cnt = 0;
            continue;
        }
        result += arr[0];
        cnt++;
    }

    cout << result << endl;

    delete[] arr;
}

int main() {
    int N, M, K;

    cin >> N >> M >> K;

    solve(N, M, K);

    return 0;
}